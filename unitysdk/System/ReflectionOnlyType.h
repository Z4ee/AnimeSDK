#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeType.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

#define SYSTEM_REFLECTIONONLYTYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A3A9B70)
#define SYSTEM_REFLECTIONONLYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A9B10)

namespace System
{
	inline static constexpr unsigned int ReflectionOnlyType_TypeDefinitionIndex = 312;

	class ReflectionOnlyType : public ::System::RuntimeType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTIONONLYTYPE__CTOR_OFFSET))(this);
		}

		::System::RuntimeTypeHandle get_TypeHandle()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTIONONLYTYPE_GET_TYPEHANDLE_OFFSET))(this);
		}
	};
}
