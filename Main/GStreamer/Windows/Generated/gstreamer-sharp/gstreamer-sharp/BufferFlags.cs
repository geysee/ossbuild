// This file was generated by the Gtk# code generator.
// Any changes made will be lost if regenerated.

namespace Gst {

	using System;
	using System.Runtime.InteropServices;

#region Autogenerated code
	[Flags]
	[Gst.GLib.GType (typeof (Gst.BufferFlagsGType))]
	public enum BufferFlags {

		Readonly = MiniObjectFlags.Readonly,
		Preroll = MiniObjectFlags.Last << 0,
		Discont = MiniObjectFlags.Last << 1,
		InCaps = MiniObjectFlags.Last << 2,
		Gap = MiniObjectFlags.Last << 3,
		DeltaUnit = MiniObjectFlags.Last << 4,
		Media1 = MiniObjectFlags.Last << 5,
		Media2 = MiniObjectFlags.Last << 6,
		Media3 = MiniObjectFlags.Last << 7,
		Last = MiniObjectFlags.Last << 8,
	}

	internal class BufferFlagsGType {
		[DllImport ("libgstreamer-0.10.dll", CallingConvention = CallingConvention.Cdecl)]
		static extern IntPtr gst_buffer_flag_get_type ();

		public static Gst.GLib.GType GType {
			get {
				return new Gst.GLib.GType (gst_buffer_flag_get_type ());
			}
		}
	}
#endregion
}
