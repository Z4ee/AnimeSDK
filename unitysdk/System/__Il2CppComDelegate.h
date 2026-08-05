#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/__Il2CppComObject.h"

#define SYSTEM___IL2CPPCOMDELEGATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DC15100)

namespace System
{
	inline static constexpr unsigned int __Il2CppComDelegate_TypeDefinitionIndex = 1632;

	class __Il2CppComDelegate : public ::System::__Il2CppComObject
	{
	public:
		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___IL2CPPCOMDELEGATE_FINALIZE_OFFSET))(this);
		}
	};
}
