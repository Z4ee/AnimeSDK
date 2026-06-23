#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_CONVERTTO_OFFSET UNITYSDK_OFFSET(0xA4EC20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA4EC80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4EC40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DF7B590)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMBYTE_OFFSET UNITYSDK_OFFSET(0x1DF7B5D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMCHAR_OFFSET UNITYSDK_OFFSET(0x1DF7B5B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DF7B6F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT16_OFFSET UNITYSDK_OFFSET(0x1DF7B610)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1DF7B650)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT64_OFFSET UNITYSDK_OFFSET(0x1DF7B690)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1DF7A490)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSBYTE_OFFSET UNITYSDK_OFFSET(0x1DF7B5F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSINGLE_OFFSET UNITYSDK_OFFSET(0x1DF7B6D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7AD20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT16_OFFSET UNITYSDK_OFFSET(0x1DF7B630)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT32_OFFSET UNITYSDK_OFFSET(0x1DF7B670)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT64_OFFSET UNITYSDK_OFFSET(0x1DF7B6B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4EC90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x4120B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DF7A8B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1DF7A240)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1DF7A330)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DF79D40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1DF79DD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1DF79E60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1DF79F00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1DF7B550)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1DF79FA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1DF7B570)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1DF7A040)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1DF7A120)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DF79CC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DF7A8F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0xA4ECC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOBYTE_OFFSET UNITYSDK_OFFSET(0xA4ECD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOCHAR_OFFSET UNITYSDK_OFFSET(0xA4ED40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODATETIME_OFFSET UNITYSDK_OFFSET(0xA4EDA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0xA4EDF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0xA4EEF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT16_OFFSET UNITYSDK_OFFSET(0xA4EFC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT32_OFFSET UNITYSDK_OFFSET(0xA4F040)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT64_OFFSET UNITYSDK_OFFSET(0xA4F0C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOOBJECT_OFFSET UNITYSDK_OFFSET(0xA4F4D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0xA4ECD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0xA4F140)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA4ECB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4ECB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOTYPE_OFFSET UNITYSDK_OFFSET(0xA4F240)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT16_OFFSET UNITYSDK_OFFSET(0xA4F290)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT32_OFFSET UNITYSDK_OFFSET(0xA4F350)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT64_OFFSET UNITYSDK_OFFSET(0xA4F410)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_10_OFFSET UNITYSDK_OFFSET(0xA4EBE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_11_OFFSET UNITYSDK_OFFSET(0xA4EC00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA4EAC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA4EAE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA4EB00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0xA4EB20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0xA4EB40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0xA4EB60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0xA4EB80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0xA4EBA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_9_OFFSET UNITYSDK_OFFSET(0xA4EBC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4EAA0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int PrimitiveValue_TypeDefinitionIndex = 32077;

	struct alignas(8) PrimitiveValue
	{
		::System::TypeCode m_Type; // 0x10
		::System::Boolean m_BoolValue; // 0x14
		::System::Char m_CharValue; // 0x14
		::System::Byte m_ByteValue; // 0x14
		::System::SByte m_SByteValue; // 0x14
		::System::Int16 m_ShortValue; // 0x14
		::System::UInt16 m_UShortValue; // 0x14
		::System::Int32 m_IntValue; // 0x14
		::System::UInt32 m_UIntValue; // 0x14
		::System::Int64 m_LongValue; // 0x14
		::System::UInt64 m_ULongValue; // 0x14
		::System::Single m_FloatValue; // 0x14
		::System::Double m_DoubleValue; // 0x14

		::System::Void _ctor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_5_OFFSET))(this, value);
		}

		::System::Void _ctor_6(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_6_OFFSET))(this, value);
		}

		::System::Void _ctor_7(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_7_OFFSET))(this, value);
		}

		::System::Void _ctor_8(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_8_OFFSET))(this, value);
		}

		::System::Void _ctor_9(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_9_OFFSET))(this, value);
		}

		::System::Void _ctor_10(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_10_OFFSET))(this, value);
		}

		::System::Void _ctor_11(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_11_OFFSET))(this, value);
		}

		::System::TypeCode get_type()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GET_ISEMPTY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue ConvertTo(::System::TypeCode type)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID, ::System::TypeCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_CONVERTTO_OFFSET))(this, type);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::PrimitiveValue other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::PrimitiveValue left, ::UnityEngine::InputSystem::Utilities::PrimitiveValue right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::PrimitiveValue left, ::UnityEngine::InputSystem::Utilities::PrimitiveValue right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromString(::System::String* value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSTRING_OFFSET))(value);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Byte ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Char ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOCHAR_OFFSET))(this, provider);
		}

		/*
		::System::DateTime ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODATETIME_OFFSET))(this, provider);
		}
		*/

		/*
		::System::Decimal ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODECIMAL_OFFSET))(this, provider);
		}
		*/

		::System::Double ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Int16 ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT16_OFFSET))(this, provider);
		}

		::System::Int32 ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT32_OFFSET))(this, provider);
		}

		::System::Int64 ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT64_OFFSET))(this, provider);
		}

		::System::SByte ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Single ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::String* ToString_1(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSTRING_1_OFFSET))(this, provider);
		}

		::System::Object* ToType(::System::Type* conversionType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOTYPE_OFFSET))(this, conversionType, provider);
		}

		::System::UInt16 ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT16_OFFSET))(this, provider);
		}

		::System::UInt32 ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT32_OFFSET))(this, provider);
		}

		::System::UInt64 ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Object* ToObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOOBJECT_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromObject(::System::Object* value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMOBJECT_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_1(::System::Char value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_2(::System::Byte value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_3(::System::SByte value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::SByte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_3_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_4(::System::Int16 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_4_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_5(::System::UInt16 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_5_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_6(::System::Int32 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_6_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_7(::System::UInt32 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_7_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_8(::System::Int64 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_8_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_9(::System::UInt64 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_9_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_10(::System::Single value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_10_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue op_Implicit_11(::System::Double value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_11_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromBoolean(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMBOOLEAN_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromChar(::System::Char value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMCHAR_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromByte(::System::Byte value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMBYTE_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromSByte(::System::SByte value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::SByte))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSBYTE_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt16(::System::Int16 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT16_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt16(::System::UInt16 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT16_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt32(::System::Int32 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT32_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt32(::System::UInt32 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT32_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromInt64(::System::Int64 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT64_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromUInt64(::System::UInt64 value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT64_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromSingle(::System::Single value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSINGLE_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::PrimitiveValue FromDouble(::System::Double value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMDOUBLE_OFFSET))(value);
		}
	};
}
