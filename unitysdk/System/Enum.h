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

#define SYSTEM_ENUM_COMPARETO_OFFSET UNITYSDK_OFFSET(0x162E4CD0)
#define SYSTEM_ENUM_EQUALS_OFFSET UNITYSDK_OFFSET(0x162E4770)
#define SYSTEM_ENUM_FORMAT_OFFSET UNITYSDK_OFFSET(0x162E3EC0)
#define SYSTEM_ENUM_GETCACHEDVALUESANDNAMES_OFFSET UNITYSDK_OFFSET(0x162E1220)
#define SYSTEM_ENUM_GETENUMVALUESANDNAMES_OFFSET UNITYSDK_OFFSET(0x162E1390)
#define SYSTEM_ENUM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x162E4780)
#define SYSTEM_ENUM_GETNAMES_OFFSET UNITYSDK_OFFSET(0x162E31C0)
#define SYSTEM_ENUM_GETNAME_OFFSET UNITYSDK_OFFSET(0x162E1870)
#define SYSTEM_ENUM_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x162E5110)
#define SYSTEM_ENUM_GETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x162BEBE0)
#define SYSTEM_ENUM_GETVALUES_OFFSET UNITYSDK_OFFSET(0x162E3150)
#define SYSTEM_ENUM_GETVALUE_OFFSET UNITYSDK_OFFSET(0x162E44C0)
#define SYSTEM_ENUM_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x162E46D0)
#define SYSTEM_ENUM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x162E45B0)
#define SYSTEM_ENUM_HASFLAG_OFFSET UNITYSDK_OFFSET(0x162E4F50)
#define SYSTEM_ENUM_INTERNALBOXENUM_OFFSET UNITYSDK_OFFSET(0x162E1D90)
#define SYSTEM_ENUM_INTERNALCOMPARETO_OFFSET UNITYSDK_OFFSET(0x162E1D10)
#define SYSTEM_ENUM_INTERNALFLAGSFORMAT_OFFSET UNITYSDK_OFFSET(0x162E18F0)
#define SYSTEM_ENUM_INTERNALFORMATTEDHEXSTRING_OFFSET UNITYSDK_OFFSET(0x162E13D0)
#define SYSTEM_ENUM_INTERNALFORMAT_OFFSET UNITYSDK_OFFSET(0x162E17A0)
#define SYSTEM_ENUM_INTERNALGETNAMES_OFFSET UNITYSDK_OFFSET(0x162E3210)
#define SYSTEM_ENUM_INTERNALGETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x162E1D20)
#define SYSTEM_ENUM_INTERNALGETVALUES_OFFSET UNITYSDK_OFFSET(0x162E31A0)
#define SYSTEM_ENUM_INTERNALHASFLAG_OFFSET UNITYSDK_OFFSET(0x162E4630)
#define SYSTEM_ENUM_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x162E3E70)
#define SYSTEM_ENUM_PARSE_1_OFFSET UNITYSDK_OFFSET(0x162E1DC0)
#define SYSTEM_ENUM_PARSE_OFFSET UNITYSDK_OFFSET(0x162D0D50)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x162E5380)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x162E5650)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x162E5470)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x162E5FD0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x162E5EC0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x162E5DD0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x162E5740)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x162E5920)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x162E5B00)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x162E5560)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x162E5CE0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x162E60A0)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x162E5830)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x162E5A10)
#define SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x162E5BF0)
#define SYSTEM_ENUM_TOOBJECT_10_OFFSET UNITYSDK_OFFSET(0x162E3D10)
#define SYSTEM_ENUM_TOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x162E3370)
#define SYSTEM_ENUM_TOOBJECT_2_OFFSET UNITYSDK_OFFSET(0x162E34D0)
#define SYSTEM_ENUM_TOOBJECT_3_OFFSET UNITYSDK_OFFSET(0x162E3230)
#define SYSTEM_ENUM_TOOBJECT_4_OFFSET UNITYSDK_OFFSET(0x162E38F0)
#define SYSTEM_ENUM_TOOBJECT_5_OFFSET UNITYSDK_OFFSET(0x162E3A50)
#define SYSTEM_ENUM_TOOBJECT_6_OFFSET UNITYSDK_OFFSET(0x162E3790)
#define SYSTEM_ENUM_TOOBJECT_7_OFFSET UNITYSDK_OFFSET(0x162E3630)
#define SYSTEM_ENUM_TOOBJECT_8_OFFSET UNITYSDK_OFFSET(0x162E3020)
#define SYSTEM_ENUM_TOOBJECT_9_OFFSET UNITYSDK_OFFSET(0x162E3BB0)
#define SYSTEM_ENUM_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x162E29A0)
#define SYSTEM_ENUM_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x162E4910)
#define SYSTEM_ENUM_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x162E4920)
#define SYSTEM_ENUM_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x162E4E60)
#define SYSTEM_ENUM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162E4820)
#define SYSTEM_ENUM_TOUINT64_OFFSET UNITYSDK_OFFSET(0x162E1BE0)
#define SYSTEM_ENUM_TRYPARSEENUM_OFFSET UNITYSDK_OFFSET(0x162E1E90)
#define SYSTEM_ENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x162E60C0)
#define SYSTEM_ENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x162E60B0)

namespace System
{
	inline static constexpr unsigned int Enum_TypeDefinitionIndex = 238;

	struct alignas(8) Enum
	{
		static ::Il2CppArray<::System::Char>** StaticGet_enumSeperatorCharArray()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Enum_TypeDefinitionIndex)->GetStaticField(0x4F70);
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

		static ::System::Enum_ValuesAndNames* GetCachedValuesAndNames(::System::RuntimeType* enumType, ::System::Boolean getNames)
		{
			return ((::System::Enum_ValuesAndNames*(*)(::System::RuntimeType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETCACHEDVALUESANDNAMES_OFFSET))(enumType, getNames);
		}

		static ::System::String* InternalFormattedHexString(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALFORMATTEDHEXSTRING_OFFSET))(value);
		}

		static ::System::String* InternalFormat(::System::RuntimeType* eT, ::System::Object* value)
		{
			return ((::System::String*(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALFORMAT_OFFSET))(eT, value);
		}

		static ::System::String* InternalFlagsFormat(::System::RuntimeType* eT, ::System::Object* value)
		{
			return ((::System::String*(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALFLAGSFORMAT_OFFSET))(eT, value);
		}

		static ::System::UInt64 ToUInt64(::System::Object* value)
		{
			return ((::System::UInt64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOUINT64_OFFSET))(value);
		}

		static ::System::Int32 InternalCompareTo(::System::Object* o1, ::System::Object* o2)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALCOMPARETO_OFFSET))(o1, o2);
		}

		static ::System::RuntimeType* InternalGetUnderlyingType(::System::RuntimeType* enumType)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALGETUNDERLYINGTYPE_OFFSET))(enumType);
		}

		static ::System::Boolean GetEnumValuesAndNames(::System::RuntimeType* enumType, ::Il2CppArray<::System::UInt64>*& values, ::Il2CppArray<::System::String*>*& names)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::Il2CppArray<::System::UInt64>*&, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETENUMVALUESANDNAMES_OFFSET))(enumType, values, names);
		}

		static ::System::Object* InternalBoxEnum(::System::RuntimeType* enumType, ::System::Int64 value)
		{
			return ((::System::Object*(*)(::System::RuntimeType*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALBOXENUM_OFFSET))(enumType, value);
		}

		static ::System::Object* Parse(::System::Type* enumType, ::System::String* value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_PARSE_OFFSET))(enumType, value);
		}

		static ::System::Object* Parse_1(::System::Type* enumType, ::System::String* value, ::System::Boolean ignoreCase)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_PARSE_1_OFFSET))(enumType, value, ignoreCase);
		}

		/*
		static ::System::Boolean TryParseEnum(::System::Type* enumType, ::System::String* value, ::System::Boolean ignoreCase, ::System::Enum_EnumResult& parseResult)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Enum_EnumResult&))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TRYPARSEENUM_OFFSET))(enumType, value, ignoreCase, parseResult);
		}
		*/

		static ::System::Type* GetUnderlyingType(::System::Type* enumType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETUNDERLYINGTYPE_OFFSET))(enumType);
		}

		static ::System::Array* GetValues(::System::Type* enumType)
		{
			return ((::System::Array*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETVALUES_OFFSET))(enumType);
		}

		static ::Il2CppArray<::System::UInt64>* InternalGetValues(::System::RuntimeType* enumType)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALGETVALUES_OFFSET))(enumType);
		}

		static ::System::String* GetName(::System::Type* enumType, ::System::Object* value)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETNAME_OFFSET))(enumType, value);
		}

		static ::Il2CppArray<::System::String*>* GetNames(::System::Type* enumType)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETNAMES_OFFSET))(enumType);
		}

		static ::Il2CppArray<::System::String*>* InternalGetNames(::System::RuntimeType* enumType)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALGETNAMES_OFFSET))(enumType);
		}

		static ::System::Object* ToObject(::System::Type* enumType, ::System::Object* value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_OFFSET))(enumType, value);
		}

		static ::System::Boolean IsDefined(::System::Type* enumType, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_ISDEFINED_OFFSET))(enumType, value);
		}

		static ::System::String* Format(::System::Type* enumType, ::System::Object* value, ::System::String* format)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_FORMAT_OFFSET))(enumType, value, format);
		}

		::System::Object* get_value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GET_VALUE_OFFSET))(this);
		}

		::System::Object* GetValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETVALUE_OFFSET))(this);
		}

		::System::Boolean InternalHasFlag(::System::Enum* flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Enum*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_INTERNALHASFLAG_OFFSET))(this, flags);
		}

		::System::Int32 get_hashcode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GET_HASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_1_OFFSET))(this, format, provider);
		}

		::System::Int32 CompareTo(::System::Object* target)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_COMPARETO_OFFSET))(this, target);
		}

		::System::String* ToString_2(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_2_OFFSET))(this, format);
		}

		::System::String* ToString_3(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOSTRING_3_OFFSET))(this, provider);
		}

		::System::Boolean HasFlag(::System::Enum* flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Enum*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_HASFLAG_OFFSET))(this, flag);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, provider);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, provider);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, provider);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, provider);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, provider);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, provider);
		}

		/*
		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, provider);
		}
		*/

		/*
		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, provider);
		}
		*/

		::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, type, provider);
		}

		static ::System::Object* ToObject_1(::System::Type* enumType, ::System::SByte value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_1_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_2(::System::Type* enumType, ::System::Int16 value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_2_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_3(::System::Type* enumType, ::System::Int32 value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_3_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_4(::System::Type* enumType, ::System::Byte value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_4_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_5(::System::Type* enumType, ::System::UInt16 value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_5_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_6(::System::Type* enumType, ::System::UInt32 value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_6_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_7(::System::Type* enumType, ::System::Int64 value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_7_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_8(::System::Type* enumType, ::System::UInt64 value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_8_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_9(::System::Type* enumType, ::System::Char value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_9_OFFSET))(enumType, value);
		}

		static ::System::Object* ToObject_10(::System::Type* enumType, ::System::Boolean value)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_TOOBJECT_10_OFFSET))(enumType, value);
		}
	};
}
