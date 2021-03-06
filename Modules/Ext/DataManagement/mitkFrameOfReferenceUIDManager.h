/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/


#ifndef FRAMEOFREFERENCEUIDMANAGER_H_HEADER_INCLUDED_C1EBD0AD
#define FRAMEOFREFERENCEUIDMANAGER_H_HEADER_INCLUDED_C1EBD0AD

#include "mitkCommon.h"
#include "MitkExtExports.h"
#include <vector>
#include <string>

namespace mitk {

//##Documentation
//## @brief Manager to map the internal FrameOfReferenceID of
//## the Geometry3D (Geometry3D::m_FrameOfReferenceID) to a
//## DICOM FrameOfReferenceUID
//##
class MitkExt_EXPORT FrameOfReferenceUIDManager
{
public:
  typedef std::string FrameOfReferenceUIDType;
private:
  static std::vector<FrameOfReferenceUIDType> m_FrameOfReferenceUIDs;
public:
  static unsigned int AddFrameOfReferenceUID(const char* forUID);
  static const char* GetFrameOfReferenceUID(unsigned int geometryFrameOfReferenceID);
  FrameOfReferenceUIDManager();
  ~FrameOfReferenceUIDManager();
};

} // namespace mitk

#endif /* GEOMETRY3D_H_HEADER_INCLUDED_C1EBD0AD */
