#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class Object; }
namespace UnrealTypes { class Property; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_FPROPERTYHANDLE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DDBD0)
#define UNREALTYPES_FPROPERTYHANDLE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNREALTYPES_FPROPERTYHANDLE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DDBC0)
#define UNREALTYPES_FPROPERTYHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNREALTYPES_FPROPERTYHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6DBDC0)
#define UNREALTYPES_FPROPERTYHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9DDB60)
#define UNREALTYPES_FPROPERTYHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNREALTYPES_FPROPERTYHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x5D9030)
#define UNREALTYPES_FPROPERTYHANDLE_GET_REF_OFFSET UNITYSDK_OFFSET(0x9DDAF0)
#define UNREALTYPES_FPROPERTYHANDLE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DDC70)
#define UNREALTYPES_FPROPERTYHANDLE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DDCD0)
#define UNREALTYPES_FPROPERTYHANDLE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNREALTYPES_FPROPERTYHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x9DDC20)
#define UNREALTYPES_FPROPERTYHANDLE_UNREALTYPES_ISTRUCT_UNREALTYPES_FPROPERTYHANDLE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DDBD0)
#define UNREALTYPES_FPROPERTYHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B5BE0)
#define UNREALTYPES_FPROPERTYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FPropertyHandle_TypeDefinitionIndex = 27673;

	struct alignas(4) FPropertyHandle
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FPropertyHandle_TypeDefinitionIndex)->GetStaticField(0x22900);
		}
		static ::UnrealTypes::FPropertyHandle* StaticGet_Invalid()
		{
			return (::UnrealTypes::FPropertyHandle*)Il2CppClass::FromTypeDefinitionIndex(FPropertyHandle_TypeDefinitionIndex)->GetStaticField(0x7820);
		}
		::System::Int32 _propertyIndex; // 0x10

		::System::Void _ctor(::System::Int32 propertyIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE__CTOR_OFFSET))(this, propertyIndex);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::UnrealTypes::Property* get_Ref()
		{
			return ((::UnrealTypes::Property*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_GET_REF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnrealTypes::FPropertyHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FPropertyHandle))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		::UnrealTypes::FPropertyHandle DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FPropertyHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FPropertyHandle&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_RESET_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_GET_STATICSTRUCT_OFFSET))(this);
		}

		::UnrealTypes::FPropertyHandle CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FPropertyHandle MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyHandle(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FPropertyHandle__CopyAssign(::UnrealTypes::FPropertyHandle& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FPropertyHandle&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYHANDLE_UNREALTYPES_ISTRUCT_UNREALTYPES_FPROPERTYHANDLE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
