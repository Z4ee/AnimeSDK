#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FGuid.h"
#include "unitysdk/UnrealTypes/FPropertyBagContainerTypes.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/PropertyBagPropertyType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Object; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA15920)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA158E0)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_CREATE_OFFSET UNITYSDK_OFFSET(0x1E38EBC0)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA158C0)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA15860)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA15960)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISCLASSTYPE_OFFSET UNITYSDK_OFFSET(0xA15840)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISCOMPATIBLETYPE_OFFSET UNITYSDK_OFFSET(0xA15850)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISFLOATNUMERICTYPE_OFFSET UNITYSDK_OFFSET(0xA15820)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISNUMERICTYPE_OFFSET UNITYSDK_OFFSET(0xA157E0)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xA15830)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISUNSIGNEDNUMERICTYPE_OFFSET UNITYSDK_OFFSET(0xA15800)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA158E0)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_UNREALTYPES_ISTRUCT_UNREALTYPES_FPROPERTYBAGPROPERTYDESC__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA15920)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38EE90)

namespace UnrealTypes
{
	inline static constexpr unsigned int FPropertyBagPropertyDesc_TypeDefinitionIndex = 28406;

	struct alignas(4) FPropertyBagPropertyDesc
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24050);
		}
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> ValueTypeObject; // 0x10
		::UnrealTypes::FGuid ID; // 0x14
		::Foundation::Unreal::FName Name; // 0x24
		::UnrealTypes::PropertyBagPropertyType ValueType; // 0x2C
		::UnrealTypes::FPropertyBagContainerTypes ContainerTypes; // 0x2D
		::UnrealTypes::FPropertyHandle CachedProperty; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC__CCTOR_OFFSET))();
		}

		::System::Boolean IsNumericType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISNUMERICTYPE_OFFSET))(this);
		}

		::System::Boolean IsUnsignedNumericType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISUNSIGNEDNUMERICTYPE_OFFSET))(this);
		}

		::System::Boolean IsFloatNumericType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISFLOATNUMERICTYPE_OFFSET))(this);
		}

		::System::Boolean IsObjectType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISOBJECTTYPE_OFFSET))(this);
		}

		::System::Boolean IsClassType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISCLASSTYPE_OFFSET))(this);
		}

		::System::Boolean IsCompatibleType(::UnrealTypes::FPropertyBagPropertyDesc& other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FPropertyBagPropertyDesc&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_ISCOMPATIBLETYPE_OFFSET))(this, other);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::UnrealTypes::FPropertyBagPropertyDesc Create()
		{
			return ((::UnrealTypes::FPropertyBagPropertyDesc(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_CREATE_OFFSET))();
		}

		::UnrealTypes::FPropertyBagPropertyDesc DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyBagPropertyDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FPropertyBagPropertyDesc CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyBagPropertyDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FPropertyBagPropertyDesc MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyBagPropertyDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FPropertyBagPropertyDesc& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FPropertyBagPropertyDesc&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FPropertyBagPropertyDesc__CopyAssign(::UnrealTypes::FPropertyBagPropertyDesc& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FPropertyBagPropertyDesc&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_UNREALTYPES_ISTRUCT_UNREALTYPES_FPROPERTYBAGPROPERTYDESC__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
