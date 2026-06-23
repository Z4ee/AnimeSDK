#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid_GuidStyles.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_GUID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x98F070)
#define SYSTEM_GUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x98F060)
#define SYSTEM_GUID_EATALLWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1C9CC460)
#define SYSTEM_GUID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x98EFE0)
#define SYSTEM_GUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x98EF60)
#define SYSTEM_GUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98EF30)
#define SYSTEM_GUID_GETRESULT_OFFSET UNITYSDK_OFFSET(0x98F050)
#define SYSTEM_GUID_HEXSTOCHARS_1_OFFSET UNITYSDK_OFFSET(0x1C9CDCC0)
#define SYSTEM_GUID_HEXSTOCHARS_OFFSET UNITYSDK_OFFSET(0x1C9CDC40)
#define SYSTEM_GUID_HEXTOCHAR_OFFSET UNITYSDK_OFFSET(0x1C9CDC30)
#define SYSTEM_GUID_ISHEXPREFIX_OFFSET UNITYSDK_OFFSET(0x1C9CC650)
#define SYSTEM_GUID_NEWGUID_OFFSET UNITYSDK_OFFSET(0x1C9CDD80)
#define SYSTEM_GUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C9CDB40)
#define SYSTEM_GUID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C9CDBB0)
#define SYSTEM_GUID_PARSE_OFFSET UNITYSDK_OFFSET(0x1C9CB260)
#define SYSTEM_GUID_STRINGTOINT_1_OFFSET UNITYSDK_OFFSET(0x1C9CC7B0)
#define SYSTEM_GUID_STRINGTOINT_2_OFFSET UNITYSDK_OFFSET(0x1C9CC800)
#define SYSTEM_GUID_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x1C9CC720)
#define SYSTEM_GUID_STRINGTOLONG_1_OFFSET UNITYSDK_OFFSET(0x1C9CC9E0)
#define SYSTEM_GUID_STRINGTOLONG_OFFSET UNITYSDK_OFFSET(0x1C9CC7A0)
#define SYSTEM_GUID_STRINGTOSHORT_1_OFFSET UNITYSDK_OFFSET(0x1C9CC7C0)
#define SYSTEM_GUID_STRINGTOSHORT_OFFSET UNITYSDK_OFFSET(0x1C9CC750)
#define SYSTEM_GUID_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x98EEE0)
#define SYSTEM_GUID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x98F120)
#define SYSTEM_GUID_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x98F120)
#define SYSTEM_GUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98EEF0)
#define SYSTEM_GUID_TRYPARSEGUIDWITHDASHES_OFFSET UNITYSDK_OFFSET(0x1C9CB390)
#define SYSTEM_GUID_TRYPARSEGUIDWITHHEXPREFIX_OFFSET UNITYSDK_OFFSET(0x1C9CB7E0)
#define SYSTEM_GUID_TRYPARSEGUIDWITHNOSTYLE_OFFSET UNITYSDK_OFFSET(0x1C9CC090)
#define SYSTEM_GUID_TRYPARSEGUID_OFFSET UNITYSDK_OFFSET(0x1C9CAD40)
#define SYSTEM_GUID_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1C9CB330)
#define SYSTEM_GUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9CDF50)
#define SYSTEM_GUID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x98EE50)
#define SYSTEM_GUID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x98EEC0)
#define SYSTEM_GUID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x98EE50)
#define SYSTEM_GUID__CTOR_4_OFFSET UNITYSDK_OFFSET(0x98EED0)
#define SYSTEM_GUID__CTOR_OFFSET UNITYSDK_OFFSET(0x98EE40)

namespace System
{
	inline static constexpr unsigned int Guid_TypeDefinitionIndex = 255;

	struct alignas(4) Guid
	{
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet__rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(Guid_TypeDefinitionIndex)->GetStaticField(0x5B0);
		}
		static ::System::Object** StaticGet__rngAccess()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Guid_TypeDefinitionIndex)->GetStaticField(0x5B8);
		}
		static ::System::Guid* StaticGet_Empty()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(Guid_TypeDefinitionIndex)->GetStaticField(0x100);
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

		::System::Void _ctor(::Il2CppArray<::System::Byte>* b)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_OFFSET))(this, b);
		}

		::System::Void _ctor_1(::System::UInt32 a, ::System::UInt16 b, ::System::UInt16 c, ::System::Byte d, ::System::Byte e, ::System::Byte f, ::System::Byte g, ::System::Byte h, ::System::Byte i, ::System::Byte j, ::System::Byte k)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt16, ::System::UInt16, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_1_OFFSET))(this, a, b, c, d, e, f, g, h, i, j, k);
		}

		::System::Void _ctor_2(::System::Int32 a, ::System::Int16 b, ::System::Int16 c, ::Il2CppArray<::System::Byte>* d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int16, ::System::Int16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_2_OFFSET))(this, a, b, c, d);
		}

		::System::Void _ctor_3(::System::Int32 a, ::System::Int16 b, ::System::Int16 c, ::System::Byte d, ::System::Byte e, ::System::Byte f, ::System::Byte g, ::System::Byte h, ::System::Byte i, ::System::Byte j, ::System::Byte k)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int16, ::System::Int16, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_3_OFFSET))(this, a, b, c, d, e, f, g, h, i, j, k);
		}

		::System::Void _ctor_4(::System::String* g)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID__CTOR_4_OFFSET))(this, g);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GUID__CCTOR_OFFSET))();
		}

		static ::System::Guid Parse(::System::String* input)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_PARSE_OFFSET))(input);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Guid& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSE_OFFSET))(input, result);
		}

		/*
		static ::System::Boolean TryParseGuid(::System::String* g, ::System::Guid_GuidStyles flags, ::System::Guid_GuidResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidStyles, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUID_OFFSET))(g, flags, result);
		}
		*/

		/*
		static ::System::Boolean TryParseGuidWithHexPrefix(::System::String* guidString, ::System::Guid_GuidResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHHEXPREFIX_OFFSET))(guidString, result);
		}
		*/

		/*
		static ::System::Boolean TryParseGuidWithNoStyle(::System::String* guidString, ::System::Guid_GuidResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHNOSTYLE_OFFSET))(guidString, result);
		}
		*/

		/*
		static ::System::Boolean TryParseGuidWithDashes(::System::String* guidString, ::System::Guid_GuidResult& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHDASHES_OFFSET))(guidString, result);
		}
		*/

		/*
		static ::System::Boolean StringToShort(::System::String* str, ::System::Int32 requiredLength, ::System::Int32 flags, ::System::Int16& result, ::System::Guid_GuidResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int16&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOSHORT_OFFSET))(str, requiredLength, flags, result, parseResult);
		}
		*/

		/*
		static ::System::Boolean StringToShort_1(::System::String* str, ::System::Int32* parsePos, ::System::Int32 requiredLength, ::System::Int32 flags, ::System::Int16& result, ::System::Guid_GuidResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32*, ::System::Int32, ::System::Int32, ::System::Int16&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOSHORT_1_OFFSET))(str, parsePos, requiredLength, flags, result, parseResult);
		}
		*/

		/*
		static ::System::Boolean StringToInt(::System::String* str, ::System::Int32 requiredLength, ::System::Int32 flags, ::System::Int32& result, ::System::Guid_GuidResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_OFFSET))(str, requiredLength, flags, result, parseResult);
		}
		*/

		/*
		static ::System::Boolean StringToInt_1(::System::String* str, ::System::Int32& parsePos, ::System::Int32 requiredLength, ::System::Int32 flags, ::System::Int32& result, ::System::Guid_GuidResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_1_OFFSET))(str, parsePos, requiredLength, flags, result, parseResult);
		}
		*/

		/*
		static ::System::Boolean StringToInt_2(::System::String* str, ::System::Int32* parsePos, ::System::Int32 requiredLength, ::System::Int32 flags, ::System::Int32& result, ::System::Guid_GuidResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_2_OFFSET))(str, parsePos, requiredLength, flags, result, parseResult);
		}
		*/

		/*
		static ::System::Boolean StringToLong(::System::String* str, ::System::Int32& parsePos, ::System::Int32 flags, ::System::Int64& result, ::System::Guid_GuidResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32, ::System::Int64&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOLONG_OFFSET))(str, parsePos, flags, result, parseResult);
		}
		*/

		/*
		static ::System::Boolean StringToLong_1(::System::String* str, ::System::Int32* parsePos, ::System::Int32 flags, ::System::Int64& result, ::System::Guid_GuidResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32*, ::System::Int32, ::System::Int64&, ::System::Guid_GuidResult&))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOLONG_1_OFFSET))(str, parsePos, flags, result, parseResult);
		}
		*/

		static ::System::String* EatAllWhitespace(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EATALLWHITESPACE_OFFSET))(str);
		}

		static ::System::Boolean IsHexPrefix(::System::String* str, ::System::Int32 i)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_ISHEXPREFIX_OFFSET))(str, i);
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

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EQUALS_OFFSET))(this, o);
		}

		::System::Boolean Equals_1(::System::Guid g)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EQUALS_1_OFFSET))(this, g);
		}

		::System::Int32 GetResult(::System::UInt32 me, ::System::UInt32 them)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GETRESULT_OFFSET))(this, me, them);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Guid value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_COMPARETO_1_OFFSET))(this, value);
		}

		static ::System::Boolean op_Equality(::System::Guid a, ::System::Guid b)
		{
			return ((::System::Boolean(*)(::System::Guid, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::System::Guid a, ::System::Guid b)
		{
			return ((::System::Boolean(*)(::System::Guid, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_GUID_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Char HexToChar(::System::Int32 a)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXTOCHAR_OFFSET))(a);
		}

		static ::System::Int32 HexsToChars(::System::Char* guidChars, ::System::Int32 offset, ::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXSTOCHARS_OFFSET))(guidChars, offset, a, b);
		}

		static ::System::Int32 HexsToChars_1(::System::Char* guidChars, ::System::Int32 offset, ::System::Int32 a, ::System::Int32 b, ::System::Boolean hex)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXSTOCHARS_1_OFFSET))(guidChars, offset, a, b, hex);
		}

		::System::String* ToString_2(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_2_OFFSET))(this, format, provider);
		}

		static ::System::Guid NewGuid()
		{
			return ((::System::Guid(*)())((::PBYTE)hIl2Cpp + SYSTEM_GUID_NEWGUID_OFFSET))();
		}
	};
}
