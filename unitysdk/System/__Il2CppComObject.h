#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM___IL2CPPCOMOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x162795C0)

namespace System
{
	inline static constexpr unsigned int __Il2CppComObject_TypeDefinitionIndex = 1761;

	class __Il2CppComObject : public ::System::Object
	{
	public:
		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___IL2CPPCOMOBJECT_FINALIZE_OFFSET))(this);
		}
	};
}
