#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedStruct.h"
#include "unitysdk/UnrealTypes/PropertyBagResult.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class PropertyBag; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA149D0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA148D0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_CREATE_OFFSET UNITYSDK_OFFSET(0x1E388080)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA14850)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA14A00)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA14200)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_MUTABLEVALUE_OFFSET UNITYSDK_OFFSET(0xA14310)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_PROPERTYBAGSTRUCT_OFFSET UNITYSDK_OFFSET(0xA14220)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA147F0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA14A20)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA142A0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_MIGRATETONEWBAGSTRUCT_OFFSET UNITYSDK_OFFSET(0xA14380)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA149E0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA149A0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_RESET_OFFSET UNITYSDK_OFFSET(0xA149F0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEBOOL_OFFSET UNITYSDK_OFFSET(0xA14390)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEBYTE_OFFSET UNITYSDK_OFFSET(0xA143E0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEDOUBLE_OFFSET UNITYSDK_OFFSET(0xA145D0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEENUM_OFFSET UNITYSDK_OFFSET(0xA14680)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0xA14570)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEINT32_OFFSET UNITYSDK_OFFSET(0xA14430)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEINT64_OFFSET UNITYSDK_OFFSET(0xA144D0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUENAME_OFFSET UNITYSDK_OFFSET(0xA14630)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEOBJECT_1_OFFSET UNITYSDK_OFFSET(0xA14790)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEOBJECT_OFFSET UNITYSDK_OFFSET(0xA14740)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUESTRUCT_OFFSET UNITYSDK_OFFSET(0xA146E0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEUINT32_OFFSET UNITYSDK_OFFSET(0xA14480)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEUINT64_OFFSET UNITYSDK_OFFSET(0xA14520)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDPROPERTYBAG__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA149D0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E388880)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedPropertyBag_TypeDefinitionIndex = 28408;

	struct alignas(8) FInstancedPropertyBag
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x23F90);
		}
		::UnrealTypes::FInstancedStruct _value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_ISVALID_OFFSET))(this);
		}

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::PropertyBag*> get_PropertyBagStruct()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::PropertyBag*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_PROPERTYBAGSTRUCT_OFFSET))(this);
		}
		*/

		/*
		::UnrealTypes::FReadOnlyStructView get_Value()
		{
			return ((::UnrealTypes::FReadOnlyStructView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_VALUE_OFFSET))(this);
		}
		*/

		/*
		::UnrealTypes::FStructView get_MutableValue()
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_MUTABLEVALUE_OFFSET))(this);
		}
		*/

		::System::Void MigrateToNewBagStruct(::UnrealTypes::PropertyBag* newPropertyBag)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::PropertyBag*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_MIGRATETONEWBAGSTRUCT_OFFSET))(this, newPropertyBag);
		}

		/*
		::UnrealTypes::PropertyBagResult SetValueBool(::Foundation::Unreal::FName name, ::System::Boolean value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEBOOL_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueByte(::Foundation::Unreal::FName name, ::System::Byte value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Byte))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEBYTE_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueInt32(::Foundation::Unreal::FName name, ::System::Int32 value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEINT32_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueUInt32(::Foundation::Unreal::FName name, ::System::UInt32 value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEUINT32_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueInt64(::Foundation::Unreal::FName name, ::System::Int64 value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEINT64_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueUInt64(::Foundation::Unreal::FName name, ::System::UInt64 value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEUINT64_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueFloat(::Foundation::Unreal::FName name, ::System::Single value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Single))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEFLOAT_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueDouble(::Foundation::Unreal::FName name, ::System::Double value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Double))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEDOUBLE_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueName(::Foundation::Unreal::FName name, ::Foundation::Unreal::FName value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUENAME_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueEnum(::Foundation::Unreal::FName name, ::System::UInt64 value, ::UnrealTypes::Enum* enum_)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::System::UInt64, ::UnrealTypes::Enum*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEENUM_OFFSET))(this, name, value, enum_);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueStruct(::Foundation::Unreal::FName name, ::UnrealTypes::FReadOnlyStructView value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::UnrealTypes::FReadOnlyStructView))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUESTRUCT_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueObject(::Foundation::Unreal::FName name, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEOBJECT_OFFSET))(this, name, value);
		}
		*/

		/*
		::UnrealTypes::PropertyBagResult SetValueObject_1(::Foundation::Unreal::FName name, ::UnrealTypes::Object* value)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::PVOID, ::Foundation::Unreal::FName, ::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_SETVALUEOBJECT_1_OFFSET))(this, name, value);
		}
		*/

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::UnrealTypes::FInstancedPropertyBag Create(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_CREATE_OFFSET))(allocator);
		}

		::UnrealTypes::FInstancedPropertyBag DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedPropertyBag CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedPropertyBag MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FInstancedPropertyBag& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::UnrealTypes::FInstancedPropertyBag& temp)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FInstancedPropertyBag__CopyAssign(::UnrealTypes::FInstancedPropertyBag& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDPROPERTYBAG__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
