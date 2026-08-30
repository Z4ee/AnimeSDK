#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid_GuidStyles.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_GUID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3B6CB80)
#define SYSTEM_GUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3B6CB70)
#define SYSTEM_GUID_EATALLWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1BD3C8D0)
#define SYSTEM_GUID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B6CAF0)
#define SYSTEM_GUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B6CA70)
#define SYSTEM_GUID_FASTNEWGUIDARRAY_OFFSET UNITYSDK_OFFSET(0x1BD3E0C0)
#define SYSTEM_GUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B6CA40)
#define SYSTEM_GUID_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3B6CB60)
#define SYSTEM_GUID_HEXSTOCHARS_1_OFFSET UNITYSDK_OFFSET(0x1BD3DE90)
#define SYSTEM_GUID_HEXSTOCHARS_OFFSET UNITYSDK_OFFSET(0x1BD3DE10)
#define SYSTEM_GUID_HEXTOCHAR_OFFSET UNITYSDK_OFFSET(0x1BD3DE00)
#define SYSTEM_GUID_ISHEXPREFIX_OFFSET UNITYSDK_OFFSET(0x1BD3C9D0)
#define SYSTEM_GUID_NEWGUID_OFFSET UNITYSDK_OFFSET(0x1BD3DF40)
#define SYSTEM_GUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD3DD00)
#define SYSTEM_GUID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD3DD70)
#define SYSTEM_GUID_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1BD3B520)
#define SYSTEM_GUID_PARSE_OFFSET UNITYSDK_OFFSET(0x1BD3B410)
#define SYSTEM_GUID_STRINGTOINT_1_OFFSET UNITYSDK_OFFSET(0x1BD3CB60)
#define SYSTEM_GUID_STRINGTOINT_2_OFFSET UNITYSDK_OFFSET(0x1BD3CBF0)
#define SYSTEM_GUID_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x1BD3CAD0)
#define SYSTEM_GUID_STRINGTOLONG_1_OFFSET UNITYSDK_OFFSET(0x1BD3CB50)
#define SYSTEM_GUID_STRINGTOLONG_2_OFFSET UNITYSDK_OFFSET(0x1BD3CDC0)
#define SYSTEM_GUID_STRINGTOLONG_OFFSET UNITYSDK_OFFSET(0x1BD3CDA0)
#define SYSTEM_GUID_STRINGTOSHORT_1_OFFSET UNITYSDK_OFFSET(0x1BD3CBB0)
#define SYSTEM_GUID_STRINGTOSHORT_2_OFFSET UNITYSDK_OFFSET(0x1BD3CB70)
#define SYSTEM_GUID_STRINGTOSHORT_OFFSET UNITYSDK_OFFSET(0x1BD3CB00)
#define SYSTEM_GUID_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x3B6CA20)
#define SYSTEM_GUID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3B6CC30)
#define SYSTEM_GUID_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3B6CC30)
#define SYSTEM_GUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B6CA30)
#define SYSTEM_GUID_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1BD3B7C0)
#define SYSTEM_GUID_TRYPARSEGUIDWITHDASHES_OFFSET UNITYSDK_OFFSET(0x1BD3B9B0)
#define SYSTEM_GUID_TRYPARSEGUIDWITHHEXPREFIX_OFFSET UNITYSDK_OFFSET(0x1BD3BE60)
#define SYSTEM_GUID_TRYPARSEGUIDWITHNOSTYLE_OFFSET UNITYSDK_OFFSET(0x1BD3C4C0)
#define SYSTEM_GUID_TRYPARSEGUID_OFFSET UNITYSDK_OFFSET(0x1BD3AC60)
#define SYSTEM_GUID_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1BD3B4C0)
#define SYSTEM_GUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD3E230)
#define SYSTEM_GUID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B6C990)
#define SYSTEM_GUID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B6CA00)
#define SYSTEM_GUID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B6C990)
#define SYSTEM_GUID__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3B6CA10)
#define SYSTEM_GUID__CTOR_OFFSET UNITYSDK_OFFSET(0x3B6C980)

namespace System
{
	inline static constexpr unsigned int Guid_TypeDefinitionIndex = 267;

	struct alignas(4) Guid
	{
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet__fastRng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(Guid_TypeDefinitionIndex)->GetStaticField(0x2810);
		}
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet__rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(Guid_TypeDefinitionIndex)->GetStaticField(0x2818);
		}
		static ::System::Object** StaticGet__rngAccess()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Guid_TypeDefinitionIndex)->GetStaticField(0x2820);
		}
		static ::System::Guid* StaticGet_Empty()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(Guid_TypeDefinitionIndex)->GetStaticField(0xE80);
		}
		::System::Int32 _a; // 0x10
		::System::Int16 _b; // 0x14
		::System::Int16 _c; // 0x16
		::System::Byte _d; // 0x18
		::System::Byte _e; // 0x19
		::System::Byte _f; // 0x1A
		::System::Byte _g; // 0x1B
		::System::Byte _h; // 0x1C
		::System::Byte _i; // 0x1D
		::System::Byte _j; // 0x1E
		::System::Byte _k; // 0x1F

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::Byte a4, ::System::Byte a5, ::System::Byte a6, ::System::Byte a7, ::System::Byte a8, ::System::Byte a9, ::System::Byte a10, ::System::Byte a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt16, ::System::UInt16, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int16 a2, ::System::Int16 a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int16, ::System::Int16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Int16 a2, ::System::Int16 a3, ::System::Byte a4, ::System::Byte a5, ::System::Byte a6, ::System::Byte a7, ::System::Byte a8, ::System::Byte a9, ::System::Byte a10, ::System::Byte a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int16, ::System::Int16, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void _ctor_4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_4_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GUID__CCTOR_OFFSET))();
		}

		static ::System::Guid Parse(::System::String* a1)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_PARSE_OFFSET))(a1);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Guid& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Guid ParseExact(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Guid(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_PARSEEXACT_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseExact(::System::String* a1, ::System::String* a2, ::System::Guid& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEEXACT_OFFSET))(a1, a2, a3);
		}

		/*
		static ::System::Boolean TryParseGuid(::System::String* a1, ::System::Guid_GuidStyles a2, ::System::Guid_GuidResult& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidStyles, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUID_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Boolean TryParseGuidWithHexPrefix(::System::String* a1, ::System::Guid_GuidResult& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHHEXPREFIX_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean TryParseGuidWithNoStyle(::System::String* a1, ::System::Guid_GuidResult& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHNOSTYLE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean TryParseGuidWithDashes(::System::String* a1, ::System::Guid_GuidResult& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHDASHES_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean StringToShort(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int16& a4, ::System::Guid_GuidResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int16&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOSHORT_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean StringToShort_1(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int16& a5, ::System::Guid_GuidResult& a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int16&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOSHORT_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean StringToShort_2(::System::String* a1, ::System::Int32* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int16& a5, ::System::Guid_GuidResult& a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32*, ::System::Int32, ::System::Int32, ::System::Int16&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOSHORT_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean StringToInt(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Guid_GuidResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean StringToInt_1(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5, ::System::Guid_GuidResult& a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean StringToInt_2(::System::String* a1, ::System::Int32* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32& a5, ::System::Guid_GuidResult& a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean StringToLong(::System::String* a1, ::System::Int32 a2, ::System::Int64& a3, ::System::Guid_GuidResult& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int64&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOLONG_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Boolean StringToLong_1(::System::String* a1, ::System::Int32& a2, ::System::Int32 a3, ::System::Int64& a4, ::System::Guid_GuidResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32, ::System::Int64&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOLONG_1_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean StringToLong_2(::System::String* a1, ::System::Int32* a2, ::System::Int32 a3, ::System::Int64& a4, ::System::Guid_GuidResult& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32*, ::System::Int32, ::System::Int64&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOLONG_2_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		static ::System::String* EatAllWhitespace(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EATALLWHITESPACE_OFFSET))(a1);
		}

		static ::System::Boolean IsHexPrefix(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_ISHEXPREFIX_OFFSET))(a1, a2);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOBYTEARRAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Guid a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetResult(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GETRESULT_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::Guid a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::System::Guid a1, ::System::Guid a2)
		{
			return ((::System::Boolean(*)(::System::Guid, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Guid a1, ::System::Guid a2)
		{
			return ((::System::Boolean(*)(::System::Guid, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::System::Char HexToChar(::System::Int32 a1)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXTOCHAR_OFFSET))(a1);
		}

		static ::System::Int32 HexsToChars(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXSTOCHARS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 HexsToChars_1(::System::Char* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXSTOCHARS_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* ToString_2(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_2_OFFSET))(this, a1, a2);
		}

		static ::System::Guid NewGuid()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_GUID_NEWGUID_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* FastNewGuidArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GUID_FASTNEWGUIDARRAY_OFFSET))();
		}
	};
}
