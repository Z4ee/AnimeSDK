#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System { class Enum_ValuesAndNames; }
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_ENUM_COMPARETO_OFFSET UNITYSDK_OFFSET(0x186C7BB0)
#define SYSTEM_ENUM_EQUALS_OFFSET UNITYSDK_OFFSET(0x186C78A0)
#define SYSTEM_ENUM_FORMAT_OFFSET UNITYSDK_OFFSET(0x186C71B0)
#define SYSTEM_ENUM_GETCACHEDVALUESANDNAMES_OFFSET UNITYSDK_OFFSET(0x186C4490)
#define SYSTEM_ENUM_GETENUMVALUESANDNAMES_OFFSET UNITYSDK_OFFSET(0x186C4620)
#define SYSTEM_ENUM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x186C78B0)
#define SYSTEM_ENUM_GETNAMES_OFFSET UNITYSDK_OFFSET(0x186C6440)
#define SYSTEM_ENUM_GETNAME_OFFSET UNITYSDK_OFFSET(0x186C4AF0)
#define SYSTEM_ENUM_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x186C7ED0)
#define SYSTEM_ENUM_GETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x186A3E30)
#define SYSTEM_ENUM_GETVALUES_OFFSET UNITYSDK_OFFSET(0x186C63D0)
#define SYSTEM_ENUM_GETVALUE_OFFSET UNITYSDK_OFFSET(0x186C7760)
#define SYSTEM_ENUM_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x186C7800)
#define SYSTEM_ENUM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x186C77E0)
#define SYSTEM_ENUM_HASFLAG_OFFSET UNITYSDK_OFFSET(0x186C7D80)
#define SYSTEM_ENUM_INTERNALBOXENUM_OFFSET UNITYSDK_OFFSET(0x186C5020)
#define SYSTEM_ENUM_INTERNALCOMPARETO_OFFSET UNITYSDK_OFFSET(0x186C4FA0)
#define SYSTEM_ENUM_INTERNALFLAGSFORMAT_OFFSET UNITYSDK_OFFSET(0x186C4B40)
#define SYSTEM_ENUM_INTERNALFORMATTEDHEXSTRING_OFFSET UNITYSDK_OFFSET(0x186C4660)
#define SYSTEM_ENUM_INTERNALFORMAT_OFFSET UNITYSDK_OFFSET(0x186C4A40)
#define SYSTEM_ENUM_INTERNALGETNAMES_OFFSET UNITYSDK_OFFSET(0x186C64C0)
#define SYSTEM_ENUM_INTERNALGETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x186C4FB0)
#define SYSTEM_ENUM_INTERNALGETVALUES_OFFSET UNITYSDK_OFFSET(0x186C6420)
#define SYSTEM_ENUM_INTERNALHASFLAG_OFFSET UNITYSDK_OFFSET(0x186C77F0)
#define SYSTEM_ENUM_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x186C7130)
#define SYSTEM_ENUM_PARSE_1_OFFSET UNITYSDK_OFFSET(0x186C5050)
#define SYSTEM_ENUM_PARSE_OFFSET UNITYSDK_OFFSET(0x186B4690)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x186C8110)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x186C82C0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x186C81A0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x186C8880)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x186C87D0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x186C8740)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x186C8350)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x186C8470)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x186C8590)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x186C8230)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x186C86B0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x186C8950)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x186C83E0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x186C8500)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x186C8620)
#define SYSTEM_ENUM_TOOBJECT_10_OFFSET UNITYSDK_OFFSET(0x186C6FD0)
#define SYSTEM_ENUM_TOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x186C6620)
#define SYSTEM_ENUM_TOOBJECT_2_OFFSET UNITYSDK_OFFSET(0x186C6790)
#define SYSTEM_ENUM_TOOBJECT_3_OFFSET UNITYSDK_OFFSET(0x186C64E0)
#define SYSTEM_ENUM_TOOBJECT_4_OFFSET UNITYSDK_OFFSET(0x186C6BB0)
#define SYSTEM_ENUM_TOOBJECT_5_OFFSET UNITYSDK_OFFSET(0x186C6D10)
#define SYSTEM_ENUM_TOOBJECT_6_OFFSET UNITYSDK_OFFSET(0x186C6A50)
#define SYSTEM_ENUM_TOOBJECT_7_OFFSET UNITYSDK_OFFSET(0x186C68F0)
#define SYSTEM_ENUM_TOOBJECT_8_OFFSET UNITYSDK_OFFSET(0x186C6290)
#define SYSTEM_ENUM_TOOBJECT_9_OFFSET UNITYSDK_OFFSET(0x186C6E70)
#define SYSTEM_ENUM_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x186C5C10)
#define SYSTEM_ENUM_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x186C79C0)
#define SYSTEM_ENUM_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x186C79D0)
#define SYSTEM_ENUM_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x186C7D10)
#define SYSTEM_ENUM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186C7950)
#define SYSTEM_ENUM_TOUINT64_OFFSET UNITYSDK_OFFSET(0x186C4E50)
#define SYSTEM_ENUM_TRYPARSEENUM_OFFSET UNITYSDK_OFFSET(0x186C5140)
#define SYSTEM_ENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x186C8970)
#define SYSTEM_ENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x186C8960)

namespace System
{
	inline static constexpr unsigned int Enum_TypeDefinitionIndex = 237;

	struct alignas(8) Enum
	{
		static ::Il2CppArray<::System::Char>** StaticGet_enumSeperatorCharArray()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Enum_TypeDefinitionIndex)->GetStaticField(0x5E10);
		}
		// static const ::System::String* enumSeperator; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENUM__CCTOR_OFFSET))();
		}

		static ::System::Enum_ValuesAndNames* GetCachedValuesAndNames(::System::RuntimeType* a1, ::System::Boolean a2)
		{
			return ((::System::Enum_ValuesAndNames*(*)(::System::RuntimeType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETCACHEDVALUESANDNAMES_OFFSET))(a1, a2);
		}

		static ::System::String* InternalFormattedHexString(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALFORMATTEDHEXSTRING_OFFSET))(a1);
		}

		static ::System::String* InternalFormat(::System::RuntimeType* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALFORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* InternalFlagsFormat(::System::RuntimeType* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALFLAGSFORMAT_OFFSET))(a1, a2);
		}

		static ::System::UInt64 ToUInt64(::System::Object* a1)
		{
			return ((::System::UInt64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOUINT64_OFFSET))(a1);
		}

		static ::System::Int32 InternalCompareTo(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALCOMPARETO_OFFSET))(a1, a2);
		}

		static ::System::RuntimeType* InternalGetUnderlyingType(::System::RuntimeType* a1)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALGETUNDERLYINGTYPE_OFFSET))(a1);
		}

		static ::System::Boolean GetEnumValuesAndNames(::System::RuntimeType* a1, ::Il2CppArray<::System::UInt64>*& a2, ::Il2CppArray<::System::String*>*& a3)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::Il2CppArray<::System::UInt64>*&, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETENUMVALUESANDNAMES_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* InternalBoxEnum(::System::RuntimeType* a1, ::System::Int64 a2)
		{
			return ((::System::Object*(*)(::System::RuntimeType*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALBOXENUM_OFFSET))(a1, a2);
		}

		static ::System::Object* Parse(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_PARSE_OFFSET))(a1, a2);
		}

		static ::System::Object* Parse_1(::System::Type* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_PARSE_1_OFFSET))(a1, a2, a3);
		}

		/*
		static ::System::Boolean TryParseEnum(::System::Type* a1, ::System::String* a2, ::System::Boolean a3, ::System::Enum_EnumResult& a4)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Enum_EnumResult&))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TRYPARSEENUM_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Type* GetUnderlyingType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETUNDERLYINGTYPE_OFFSET))(a1);
		}

		static ::System::Array* GetValues(::System::Type* a1)
		{
			return ((::System::Array*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETVALUES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt64>* InternalGetValues(::System::RuntimeType* a1)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALGETVALUES_OFFSET))(a1);
		}

		static ::System::String* GetName(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETNAME_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* GetNames(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETNAMES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* InternalGetNames(::System::RuntimeType* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALGETNAMES_OFFSET))(a1);
		}

		static ::System::Object* ToObject(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDefined(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_ISDEFINED_OFFSET))(a1, a2);
		}

		static ::System::String* Format(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_FORMAT_OFFSET))(a1, a2, a3);
		}

		::System::Object* get_value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GET_VALUE_OFFSET))(this);
		}

		::System::Object* GetValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETVALUE_OFFSET))(this);
		}

		::System::Boolean InternalHasFlag(::System::Enum* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Enum*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALHASFLAG_OFFSET))(this, a1);
		}

		::System::Int32 get_hashcode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GET_HASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_3_OFFSET))(this, a1);
		}

		::System::Boolean HasFlag(::System::Enum* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Enum*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_HASFLAG_OFFSET))(this, a1);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, a1);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, a1);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, a1);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, a1);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, a1);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, a1);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, a1);
		}

		/*
		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, a1);
		}
		*/

		::System::Object* System_IConvertible_ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, a1, a2);
		}

		static ::System::Object* ToObject_1(::System::Type* a1, ::System::SByte a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_1_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_2(::System::Type* a1, ::System::Int16 a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_2_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_3(::System::Type* a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_3_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_4(::System::Type* a1, ::System::Byte a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_4_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_5(::System::Type* a1, ::System::UInt16 a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_5_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_6(::System::Type* a1, ::System::UInt32 a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_6_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_7(::System::Type* a1, ::System::Int64 a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_7_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_8(::System::Type* a1, ::System::UInt64 a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_8_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_9(::System::Type* a1, ::System::Char a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_9_OFFSET))(a1, a2);
		}

		static ::System::Object* ToObject_10(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_10_OFFSET))(a1, a2);
		}
	};
}
