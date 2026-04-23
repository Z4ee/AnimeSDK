#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM___IL2CPPCOMOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x178A5EC0)

namespace System
{
	inline static constexpr unsigned int __Il2CppComObject_TypeDefinitionIndex = 1762;

	class __Il2CppComObject : public ::System::Object
	{
	public:
		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___IL2CPPCOMOBJECT_FINALIZE_OFFSET))(this);
		}
	};
}
