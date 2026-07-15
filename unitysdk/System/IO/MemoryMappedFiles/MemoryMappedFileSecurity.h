#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileRights.h"
#include "unitysdk/System/Security/AccessControl/ObjectSecurity_1.h"

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedFileSecurity_TypeDefinitionIndex = 3115;

	class MemoryMappedFileSecurity : public ::System::Security::AccessControl::ObjectSecurity_1<::System::IO::MemoryMappedFiles::MemoryMappedFileRights>
	{
	public:
	};
}
