// This file was generated by the Gtk# code generator.
// Any changes made will be lost if regenerated.

namespace Gst.Interfaces {

	using System;

	public delegate void NormChangedHandler(object o, NormChangedArgs args);

	public class NormChangedArgs : Gst.GLib.SignalArgs {
		public Gst.Interfaces.TunerNorm Norm{
			get {
				return (Gst.Interfaces.TunerNorm) Args [0];
			}
		}

	}
}
