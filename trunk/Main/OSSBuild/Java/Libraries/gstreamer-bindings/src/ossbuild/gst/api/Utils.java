
package ossbuild.gst.api;

import com.sun.jna.NativeLong;
import com.sun.jna.Pointer;
import java.net.URI;
import ossbuild.StringUtil;
import ossbuild.gst.INativeObject;
import static ossbuild.gst.api.GObject.*;

/**
 *
 * @author David Hoyt <dhoyt@hoytsoft.org>
 */
public class Utils {
	//<editor-fold defaultstate="collapsed" desc="Overloads">
	//<editor-fold defaultstate="collapsed" desc="setGValue">
	public static boolean setGValue(GValue value, GType type, Object data) {
		return setGValue(value.getPointer(), type, data);
	}

	public static boolean setGValue(GValue value, long type, Object data) {
		return setGValue(value.getPointer(), GType.fromNative(type), data);
	}

	public static boolean setGValue(GValue value, NativeLong type, Object data) {
		return setGValue(value.getPointer(), GType.fromNative(type), data);
	}

	public static boolean setGValue(Pointer g_value_ptr, long type, Object data) {
		return setGValue(g_value_ptr, GType.fromNative(type), data);
	}

	public static boolean setGValue(Pointer g_value_ptr, NativeLong type, Object data) {
		return setGValue(g_value_ptr, GType.fromNative(type), data);
	}
	//</editor-fold>

	//<editor-fold defaultstate="collapsed" desc="getGValue">
	public static Object getGValue(GValue value, GType type) {
		return getGValue(value.getPointer(), type);
	}

	public static Object getGValue(GValue value, long type) {
		return getGValue(value.getPointer(), GType.fromNative(type));
	}

	public static Object getGValue(GValue value, NativeLong type) {
		return getGValue(value.getPointer(), GType.fromNative(type));
	}

	public static Object getGValue(Pointer g_value_ptr, long type) {
		return getGValue(g_value_ptr, GType.fromNative(type));
	}

	public static Object getGValue(Pointer g_value_ptr, NativeLong type) {
		return getGValue(g_value_ptr, GType.fromNative(type));
	}
	//</editor-fold>
	//</editor-fold>

	public static Pointer[] createEmptyPointerArray() {
		return new Pointer[] { null };
	}

	public static String[] joinBefore(final String[] array, String...values) {
		if (array == null || array.length <= 0)
			return values;

		int i = 0;
		String[] arr = new String[array.length + values.length];

		for(i = 0; i < values.length; ++i)
			arr[i] = values[i];
		for(i = 0; i < array.length; ++i)
			arr[i + array.length] = array[i];

		return arr;
	}

	public static String[] joinAfter(final String[] array, String...values) {
		if (array == null || array.length <= 0)
			return values;

		int i = 0;
		String[] arr = new String[array.length + values.length];
		for(i = 0; i < array.length; ++i)
			arr[i] = array[i];
		for(i = 0; i < values.length; ++i)
			arr[i + array.length] = values[i];
		
		return arr;
	}

	public static Pointer[] createArgumentList(INativeObject...nativeObjects) {
		//Memory m = new Memory(Pointer.SIZE * nativeObjects.length);
		//for(int i = 0; i < nativeObjects.length; ++i)
		//	m.setPointer(i * Pointer.SIZE, nativeObjects[i].getPointer());
		Pointer[] p = new Pointer[nativeObjects.length];
		for(int i = 0; i < nativeObjects.length; ++i)
			p[i] = nativeObjects[i].getPointer();
		//PointerByReference p = new PointerByReference(m);
		//p.setPointer(m);
		//p.setValue(m);
		//return m;
		return p;
	}

	public static boolean booleanValue(Object value) {
		if (value instanceof Boolean)
			return ((Boolean) value).booleanValue();
		else if (value instanceof Number)
			return ((Number) value).intValue() != 0;
		else if (value instanceof String)
			return Boolean.parseBoolean((String) value);
		throw new IllegalArgumentException("Expected boolean value, not " + value.getClass());
	}

	public static int intValue(Object value) {
		if (value instanceof Number)
			return ((Number) value).intValue();
		else if (value instanceof String)
			return Integer.parseInt((String) value);
		throw new IllegalArgumentException("Expected integer value, not " + value.getClass());
	}
	
	public static long longValue(Object value) {
		if (value instanceof Number)
			return ((Number) value).longValue();
		else if (value instanceof String)
			return Long.parseLong((String) value);
		throw new IllegalArgumentException("Expected long value, not " + value.getClass());
	}

	public static float floatValue(Object value) {
		if (value instanceof Number)
			return ((Number) value).floatValue();
		else if (value instanceof String)
			return Float.parseFloat((String) value);
		throw new IllegalArgumentException("Expected float value, not " + value.getClass());
	}

	public static double doubleValue(Object value) {
		if (value instanceof Number)
			return  ((Number) value).doubleValue();
		else if (value instanceof String)
			return Double.parseDouble((String) value);
		throw new IllegalArgumentException("Expected double value, not " + value.getClass());
    }

	public static String toGstURI(URI uri) {
		if (uri == null)
			return StringUtil.empty;

		String uriString = uri.toString();

		// Need to fixup file:/ to be file:/// for gstreamer
		if ("file".equals(uri.getScheme()) && uri.getHost() == null) {
			final String path = uri.getRawPath();
			uriString = "file://" + path;
		}

		return uriString;
	}

	public static Pointer findPropertySpec(Pointer gobjectClassPtr, String name) {
		if (gobjectClassPtr == null || gobjectClassPtr == Pointer.NULL)
			return Pointer.NULL;
		return g_object_class_find_property(gobjectClassPtr, name);
	}

	public static boolean setGValue(Pointer g_value_ptr, GType type, Object data) {
		switch(type) {
			case Int:
				g_value_set_int(g_value_ptr, intValue(data));
				break;
			case UInt:
				g_value_set_uint(g_value_ptr, intValue(data));
				break;
			case Char:
				g_value_set_char(g_value_ptr, (byte) intValue(data));
				break;
			case UChar:
				g_value_set_uchar(g_value_ptr, (byte) intValue(data));
				break;
			case Long:
				g_value_set_long(g_value_ptr, new NativeLong(longValue(data)));
				break;
			case ULong:
				g_value_set_ulong(g_value_ptr, new NativeLong(longValue(data)));
				break;
			case Int64:
				g_value_set_int64(g_value_ptr, longValue(data));
				break;
			case UInt64:
				g_value_set_uint64(g_value_ptr, longValue(data));
				break;
			case Boolean:
				g_value_set_boolean(g_value_ptr, booleanValue(data));
				break;
			case Float:
				g_value_set_float(g_value_ptr, floatValue(data));
				break;
			case Double:
				g_value_set_double(g_value_ptr, doubleValue(data));
				break;
			default:
				return false;
		}
		return true;
    }

	public static Object getGValue(Pointer g_value_ptr, GType type) {
		switch(type) {
			case Int:
				return g_value_get_int(g_value_ptr);
			case UInt:
				return g_value_get_uint(g_value_ptr);
			case Char:
				return g_value_get_char(g_value_ptr);
			case UChar:
				return g_value_get_uchar(g_value_ptr);
			case Long:
				return g_value_get_long(g_value_ptr).longValue();
			case ULong:
				return g_value_get_ulong(g_value_ptr).longValue();
			case Int64:
				return g_value_get_int64(g_value_ptr);
			case UInt64:
				return g_value_get_uint64(g_value_ptr);
			case Boolean:
				return g_value_get_boolean(g_value_ptr);
			case Float:
				return g_value_get_float(g_value_ptr);
			case Double:
				return g_value_get_double(g_value_ptr);
			case String:
				return g_value_get_string(g_value_ptr);
			case Object:
				return g_value_get_object(g_value_ptr);
			default:
				return null;
		}
	}

	public static GValue transformGValue(GValue src, GType dstType) {
		GValue dst = new GValue();
		g_value_init(dst.getPointer(), dstType.asNativeLong());
		g_value_transform(src.getPointer(), dst.getPointer());
		return dst;
    }

    public static void transformGValue(Object data, GType type, GValue dst) {
		GValue src = new GValue();
		g_value_init(src.getPointer(), type.asNativeLong());
		setGValue(src, type, data);
		g_value_transform(src.getPointer(), dst.getPointer());
    }
}
