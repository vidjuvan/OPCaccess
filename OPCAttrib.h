//=============================================================================
//
// file :        OpcAttrib.h
//
// description : Include for the OPC scalar and spectrum attribute classes.
//
// project :	A generic class to access OPC servers
//
// $Author: andy_gotz $
//
// $Revision: 1.1 $
//
// $Log: not supported by cvs2svn $
// Revision 1.1  2005/09/06 16:27:02  meyer
// Ported to Tango%. Modified attribute structure!
//
//
// copyleft :    European Synchrotron Radiation Facility
//               BP 220, Grenoble 38043
//               FRANCE
//
//=============================================================================
#ifndef _OPCATTRIB_H
#define _OPCATTRIB_H

#include <OPCaccess.h>

namespace OPCaccess_ns
{
	class OpcScalarAttrib: public Tango::Attr
	{
		public:
		OpcScalarAttrib(const char *name,long data_type,Tango::AttrWriteType w_type)
			:Attr(name,data_type,w_type) {};
		~OpcScalarAttrib() {};
	
		virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<OPCaccess *>(dev))->read_attr(att);}
		virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<OPCaccess *>(dev))->write_attr(att);}
	};



	class OpcSpectrumAttrib: public Tango::SpectrumAttr
	{
	public:
		OpcSpectrumAttrib(const char *name,long data_type,Tango::AttrWriteType w_type,long max_x)
			:SpectrumAttr(name,data_type,w_type,max_x) {};
		OpcSpectrumAttrib(const char *name,long data_type,long max_x)
			:SpectrumAttr(name,data_type,max_x) {};
		~OpcSpectrumAttrib() {};
	
		virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<OPCaccess *>(dev))->read_attr(att);}
		virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<OPCaccess *>(dev))->write_attr(att);}
	};
}

#endif	// _OPCATTRIB_H
