// This file was generated by the Gtk# code generator.
// Any changes made will be lost if regenerated.

namespace GstSharp {

	using System;
	using System.Runtime.InteropServices;

#region Autogenerated code
	[UnmanagedFunctionPointer (CallingConvention.Cdecl)]
	internal delegate bool PadQueryFunctionNative(IntPtr pad, IntPtr query);

	internal class PadQueryFunctionInvoker {

		PadQueryFunctionNative native_cb;
		IntPtr __data;
		Gst.GLib.DestroyNotify __notify;

		~PadQueryFunctionInvoker ()
		{
			if (__notify == null)
				return;
			__notify (__data);
		}

		internal PadQueryFunctionInvoker (PadQueryFunctionNative native_cb) : this (native_cb, IntPtr.Zero, null) {}

		internal PadQueryFunctionInvoker (PadQueryFunctionNative native_cb, IntPtr data) : this (native_cb, data, null) {}

		internal PadQueryFunctionInvoker (PadQueryFunctionNative native_cb, IntPtr data, Gst.GLib.DestroyNotify notify)
		{
			this.native_cb = native_cb;
			__data = data;
			__notify = notify;
		}

		internal Gst.PadQueryFunction Handler {
			get {
				return new Gst.PadQueryFunction(InvokeNative);
			}
		}

		bool InvokeNative (Gst.Pad pad, Gst.Query query)
		{
			bool result = native_cb (pad == null ? IntPtr.Zero : pad.Handle, query == null ? IntPtr.Zero : query.Handle);
			return result;
		}
	}

	internal class PadQueryFunctionWrapper {

		public bool NativeCallback (IntPtr pad, IntPtr query)
		{
			try {
				bool __ret = managed (Gst.GLib.Object.GetObject(pad) as Gst.Pad, Gst.MiniObject.GetObject(query) as Gst.Query);
				if (release_on_call)
					gch.Free ();
				return __ret;
			} catch (Exception e) {
				Gst.GLib.ExceptionManager.RaiseUnhandledException (e, false);
				return false;
			}
		}

		bool release_on_call = false;
		GCHandle gch;

		public void PersistUntilCalled ()
		{
			release_on_call = true;
			gch = GCHandle.Alloc (this);
		}

		internal PadQueryFunctionNative NativeDelegate;
		Gst.PadQueryFunction managed;

		public PadQueryFunctionWrapper (Gst.PadQueryFunction managed)
		{
			this.managed = managed;
			if (managed != null)
				NativeDelegate = new PadQueryFunctionNative (NativeCallback);
		}

		public static Gst.PadQueryFunction GetManagedDelegate (PadQueryFunctionNative native)
		{
			if (native == null)
				return null;
			PadQueryFunctionWrapper wrapper = (PadQueryFunctionWrapper) native.Target;
			if (wrapper == null)
				return null;
			return wrapper.managed;
		}
	}
#endregion
}