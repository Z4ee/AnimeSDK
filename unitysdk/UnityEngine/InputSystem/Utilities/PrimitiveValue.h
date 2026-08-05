#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_CONVERTTO_OFFSET UNITYSDK_OFFSET(0xAA08B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAA0910)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xAA08D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1F37DDD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMBYTE_OFFSET UNITYSDK_OFFSET(0x1F37DE10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMCHAR_OFFSET UNITYSDK_OFFSET(0x1F37DDF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMDOUBLE_OFFSET UNITYSDK_OFFSET(0x1F37DF30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT16_OFFSET UNITYSDK_OFFSET(0x1F37DE50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1F37DE90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMINT64_OFFSET UNITYSDK_OFFSET(0x1F37DED0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1F37CDF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSBYTE_OFFSET UNITYSDK_OFFSET(0x1F37DE30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSINGLE_OFFSET UNITYSDK_OFFSET(0x1F37DF10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1F37D620)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT16_OFFSET UNITYSDK_OFFSET(0x1F37DE70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT32_OFFSET UNITYSDK_OFFSET(0x1F37DEB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_FROMUINT64_OFFSET UNITYSDK_OFFSET(0x1F37DEF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAA0920)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x634790)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F37D1E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1F37CB50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1F37CC10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1F37C7A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1F37C800)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1F37C860)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1F37C8D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1F37DD90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1F37C940)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1F37DDB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1F37C9B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1F37CA60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F37C740)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F37D220)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0xAA0950)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOBYTE_OFFSET UNITYSDK_OFFSET(0xAA0960)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOCHAR_OFFSET UNITYSDK_OFFSET(0xAA09A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODATETIME_OFFSET UNITYSDK_OFFSET(0xAA09E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0xAA0A30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0xAA0B00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT16_OFFSET UNITYSDK_OFFSET(0xAA0BA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT32_OFFSET UNITYSDK_OFFSET(0xAA0BF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOINT64_OFFSET UNITYSDK_OFFSET(0xAA0C40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOOBJECT_OFFSET UNITYSDK_OFFSET(0xAA0F60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0xAA0960)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0xAA0C90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xAA0940)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA0940)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOTYPE_OFFSET UNITYSDK_OFFSET(0xAA0D60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT16_OFFSET UNITYSDK_OFFSET(0xAA0DB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT32_OFFSET UNITYSDK_OFFSET(0xAA0E40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE_TOUINT64_OFFSET UNITYSDK_OFFSET(0xAA0ED0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_10_OFFSET UNITYSDK_OFFSET(0xAA0870)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_11_OFFSET UNITYSDK_OFFSET(0xAA0890)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA0750)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0xAA0770)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0xAA0790)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0xAA07B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0xAA07D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0xAA07F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0xAA0810)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0xAA0830)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_9_OFFSET UNITYSDK_OFFSET(0xAA0850)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PRIMITIVEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0730)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int PrimitiveValue_TypeDefinitionIndex = 32697;

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
