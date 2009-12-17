// This file was generated by the Gtk# code generator.
// Any changes made will be lost if regenerated.

namespace Gst {

	using System;
	using System.Runtime.InteropServices;

#region Autogenerated code
	[Flags]
	[Gst.GLib.GType (typeof (Gst.ClockFlagsGType))]
	public enum ClockFlags {

		CanDoSingleSync = MiniObjectFlags.Last << 0,
		CanDoSingleAsync = MiniObjectFlags.Last << 1,
		CanDoPeriodicSync = MiniObjectFlags.Last << 2,
		CanDoPeriodicAsync = MiniObjectFlags.Last << 3,
		CanSetResolution = MiniObjectFlags.Last << 4,
		CanSetMaster = MiniObjectFlags.Last << 5,
		Last = MiniObjectFlags.Last << 8,
	}

	internal class ClockFlagsGType {
		[DllImport ("libgstreamer-0.10.dll", CallingConvention = CallingConvention.Cdecl)]
		static extern IntPtr gst_clock_flags_get_type ();

		public static Gst.GLib.GType GType {
			get {
				return new Gst.GLib.GType (gst_clock_flags_get_type ());
			}
		}
	}
#endregion
}