#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/Property.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructPropertyParams; }

#define UNREALTYPES_STRUCTPROPERTY_COPYVALUESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D1BBD60)
#define UNREALTYPES_STRUCTPROPERTY_GET_MINALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1D1BBCF0)
#define UNREALTYPES_STRUCTPROPERTY_GET_STRUCTHANDLE_OFFSET UNITYSDK_OFFSET(0x1D1BBC50)
#define UNREALTYPES_STRUCTPROPERTY_LINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D1BBD20)
#define UNREALTYPES_STRUCTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1AE700)
#define UNREALTYPES_STRUCTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BBD10)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructProperty_TypeDefinitionIndex = 27783;

	class StructProperty : public ::UnrealTypes::Property
	{
	public:
		::UnrealTypes::ScriptStruct* Struct; // 0x58

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::StructPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::StructPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_StructHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_GET_STRUCTHANDLE_OFFSET))(this);
		}

		::System::Int32 get_MinAlignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_GET_MINALIGNMENT_OFFSET))(this);
		}

		::System::Void LinkInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_LINKINTERNAL_OFFSET))(this);
		}

		::System::Void CopyValuesInternal(::System::Void* dest, ::System::Void* src, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_COPYVALUESINTERNAL_OFFSET))(this, dest, src, count);
		}
	};
}
