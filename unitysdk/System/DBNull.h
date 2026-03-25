#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DBNULL_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1628B210)
#define SYSTEM_DBNULL_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1628B250)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1628B260)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1628B380)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1628B2C0)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1628B740)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1628B6E0)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1628B680)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x1628B3E0)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x1628B4A0)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x1628B560)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1628B320)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1628B620)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x1628B7A0)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1628B440)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1628B500)
#define SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1628B5C0)
#define SYSTEM_DBNULL_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1628B240)
#define SYSTEM_DBNULL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1628B230)
#define SYSTEM_DBNULL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1628B7B0)
#define SYSTEM_DBNULL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1628B1B0)
#define SYSTEM_DBNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1628B1A0)

namespace System
{
	inline static constexpr unsigned int DBNull_TypeDefinitionIndex = 228;

	class DBNull : public ::System::Object
	{
	public:
		static ::System::DBNull** StaticGet_Value()
		{
			return (::System::DBNull**)Il2CppClass::FromTypeDefinitionIndex(DBNull_TypeDefinitionIndex)->GetStaticField(0x20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL__CTOR_1_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DBNULL__CCTOR_OFFSET))();
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_TOSTRING_1_OFFSET))(this, provider);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, provider);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, provider);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, provider);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, provider);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, provider);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, provider);
		}

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, provider);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DBNULL_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, type, provider);
		}
	};
}
