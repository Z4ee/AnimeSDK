#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class String; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_FGUID_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2AD810)
#define UNREALTYPES_FGUID_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define UNREALTYPES_FGUID_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DC700)
#define UNREALTYPES_FGUID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNREALTYPES_FGUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9DC660)
#define UNREALTYPES_FGUID_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1D1AFBC0)
#define UNREALTYPES_FGUID_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DC5C0)
#define UNREALTYPES_FGUID_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DC6A0)
#define UNREALTYPES_FGUID_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DC710)
#define UNREALTYPES_FGUID_HEXDIGIT_OFFSET UNITYSDK_OFFSET(0x1D1AFAB0)
#define UNREALTYPES_FGUID_HEXNUMBER_OFFSET UNITYSDK_OFFSET(0x1D1AF880)
#define UNREALTYPES_FGUID_ISHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x1D1AF860)
#define UNREALTYPES_FGUID_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define UNREALTYPES_FGUID_NEWGUID_OFFSET UNITYSDK_OFFSET(0x1D1AFAE0)
#define UNREALTYPES_FGUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D1AF510)
#define UNREALTYPES_FGUID_PARSE_OFFSET UNITYSDK_OFFSET(0x1D1AF0F0)
#define UNREALTYPES_FGUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DC690)
#define UNREALTYPES_FGUID_UNREALTYPES_ISTRUCT_UNREALTYPES_FGUID__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2AD810)
#define UNREALTYPES_FGUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AFD30)
#define UNREALTYPES_FGUID__CTOR_OFFSET UNITYSDK_OFFSET(0x9DC5E0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FGuid_TypeDefinitionIndex = 27683;

	struct alignas(4) FGuid
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FGuid_TypeDefinitionIndex)->GetStaticField(0x227F0);
		}
		::System::UInt32 A; // 0x10
		::System::UInt32 B; // 0x14
		::System::UInt32 C; // 0x18
		::System::UInt32 D; // 0x1C

		::System::Void _ctor(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID__CTOR_OFFSET))(this, s);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::UnrealTypes::FGuid other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FGuid))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::UnrealTypes::FGuid& lhs, ::UnrealTypes::FGuid& rhs)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FGuid&, ::UnrealTypes::FGuid&))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean Parse(::System::String* digitString, ::UnrealTypes::FGuid& outGuid)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnrealTypes::FGuid&))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_PARSE_OFFSET))(digitString, outGuid);
		}

		static ::System::Boolean IsHexDigit(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_ISHEXDIGIT_OFFSET))(c);
		}

		/*
		static ::System::UInt32 HexNumber(::System::ReadOnlySpan_1<::System::Char> str)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_HEXNUMBER_OFFSET))(str);
		}
		*/

		static ::System::UInt32 HexDigit(::System::Char c)
		{
			return ((::System::UInt32(*)(::System::Char))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_HEXDIGIT_OFFSET))(c);
		}

		static ::UnrealTypes::FGuid NewGuid()
		{
			return ((::UnrealTypes::FGuid(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_NEWGUID_OFFSET))();
		}

		static ::System::UInt32 GetTypeHash(::UnrealTypes::FGuid& value)
		{
			return ((::System::UInt32(*)(::UnrealTypes::FGuid&))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_GETTYPEHASH_OFFSET))(value);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_GET_STATICSTRUCT_OFFSET))(this);
		}

		::UnrealTypes::FGuid DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FGuid(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FGuid CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FGuid(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FGuid MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FGuid(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FGuid& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FGuid&))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FGuid__CopyAssign(::UnrealTypes::FGuid& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FGuid&))((::PBYTE)hIl2Cpp + UNREALTYPES_FGUID_UNREALTYPES_ISTRUCT_UNREALTYPES_FGUID__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
