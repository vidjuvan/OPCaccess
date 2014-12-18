static const char *RcsId = "$Header: /users/chaize/newsvn/cvsroot/Communication/OPCaccess/src/OPCaccessStateMachine.cpp,v 1.1 2008-08-06 16:04:28 andy_gotz Exp $";
//+=============================================================================
//
// file :         OPCaccessStateMachine.cpp
//
// description :  C++ source for the OPCaccess and its alowed. 
//                method for commands and attributes
//
// project :      TANGO Device Server
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
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#include "StdAfx.h"

#include <tango.h>
#include <OPCaccess.h>
#include <OPCaccessClass.h>

/*====================================================================
 *	This file contains the methods to allow commands and attributes
 * read or write execution.
 *
 * If you wand to add your own code, add it between 
 * the "End/Re-Start of Generated Code" comments.
 *
 * If you want, you can also add your own methods.
 *====================================================================
 */

namespace OPCaccess_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================


//=================================================
//		Commands Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		OPCaccess::is_ReadCache_allowed
// 
// description : 	Execution allowed for ReadCache command.
//
//-----------------------------------------------------------------------------
bool OPCaccess::is_ReadCache_allowed(const CORBA::Any &any)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		OPCaccess::is_ReadDirect_allowed
// 
// description : 	Execution allowed for ReadDirect command.
//
//-----------------------------------------------------------------------------
bool OPCaccess::is_ReadDirect_allowed(const CORBA::Any &any)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}

}	// namespace OPCaccess_ns
