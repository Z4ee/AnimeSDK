#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/ScriptArray.h"

namespace UnrealTypes { class Property; }

#define UNREALTYPES_SCRIPTARRAYHELPER_GETRAWPTR_OFFSET UNITYSDK_OFFSET(0x93B3D0)
#define UNREALTYPES_SCRIPTARRAYHELPER_GET_NUM_OFFSET UNITYSDK_OFFSET(0x93B3C0)
#define UNREALTYPES_SCRIPTARRAYHELPER_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x93B3A0)
#define UNREALTYPES_SCRIPTARRAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x93B390)

namespace UnrealTypes
{
	inline static constexpr unsigned int ScriptArrayHelper_TypeDefinitionIndex = 25295;

	struct alignas(8) ScriptArrayHelper
	{
		::UnrealTypes::FPropertyHandle _innerProperty; // 0x10
		::UnrealTypes::ScriptArray* _array; // 0x18
		::System::Int32 _elementSize; // 0x20
		::System::Int32 _elementAlignment; // 0x24

		::System::Void _ctor(::UnrealTypes::Property* property, ::System::Void* array)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTARRAYHELPER__CTOR_OFFSET))(this, property, array);
		}

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTARRAYHELPER_ISVALIDINDEX_OFFSET))(this, index);
		}

		::System::Int32 get_Num()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTARRAYHELPER_GET_NUM_OFFSET))(this);
		}

		::System::Void* GetRawPtr(::System::Int32 index)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_SCRIPTARRAYHELPER_GETRAWPTR_OFFSET))(this, index);
		}
	};
}
