// This file was generated by the Gtk# code generator.
// Any changes made will be lost if regenerated.

namespace GstSharp {

	using System;
	using System.Runtime.InteropServices;

#region Autogenerated code
	[UnmanagedFunctionPointer (CallingConvention.Cdecl)]
	internal delegate void PadBlockCallbackNative(IntPtr pad, bool blocked, IntPtr user_data);

	internal class PadBlockCallbackInvoker {

		PadBlockCallbackNative native_cb;
		IntPtr __data;
		Gst.GLib.DestroyNotify __notify;

		~PadBlockCallbackInvoker ()
		{
			if (__notify == null)
				return;
			__notify (__data);
		}

		internal PadBlockCallbackInvoker (PadBlockCallbackNative native_cb) : this (native_cb, IntPtr.Zero, null) {}

		internal PadBlockCallbackInvoker (PadBlockCallbackNative native_cb, IntPtr data) : this (native_cb, data, null) {}

		internal PadBlockCallbackInvoker (PadBlockCallbackNative native_cb, IntPtr data, Gst.GLib.DestroyNotify notify)
		{
			this.native_cb = native_cb;
			__data = data;
			__notify = notify;
		}

		internal Gst.PadBlockCallback Handler {
			get {
				return new Gst.PadBlockCallback(InvokeNative);
			}
		}

		void InvokeNative (Gst.Pad pad, bool blocked)
		{
			native_cb (pad == null ? IntPtr.Zero : pad.Handle, blocked, __data);
		}
	}

	internal class PadBlockCallbackWrapper {

		public void NativeCallback (IntPtr pad, bool blocked, IntPtr user_data)
		{
			try {
				managed (Gst.GLib.Object.GetObject(pad) as Gst.Pad, blocked);
				if (release_on_call)
					gch.Free ();
			} catch (Exception e) {
				Gst.GLib.ExceptionManager.RaiseUnhandledException (e, false);
			}
		}

		bool release_on_call = false;
		GCHandle gch;

		public void PersistUntilCalled ()
		{
			release_on_call = true;
			gch = GCHandle.Alloc (this);
		}

		internal PadBlockCallbackNative NativeDelegate;
		Gst.PadBlockCallback managed;

		public PadBlockCallbackWrapper (Gst.PadBlockCallback managed)
		{
			this.managed = managed;
			if (managed != null)
				NativeDelegate = new PadBlockCallbackNative (NativeCallback);
		}

		public static Gst.PadBlockCallback GetManagedDelegate (PadBlockCallbackNative native)
		{
			if (native == null)
				return null;
			PadBlockCallbackWrapper wrapper = (PadBlockCallbackWrapper) native.Target;
			if (wrapper == null)
				return null;
			return wrapper.managed;
		}
	}
#endregion
}