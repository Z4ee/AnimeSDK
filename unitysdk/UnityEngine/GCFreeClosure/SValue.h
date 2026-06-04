#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue_InternalValue.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue_Type.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_10_OFFSET UNITYSDK_OFFSET(0x1B296510)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_11_OFFSET UNITYSDK_OFFSET(0x1B296530)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_12_OFFSET UNITYSDK_OFFSET(0x1B296550)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2963F0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B296410)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B296430)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B296450)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B296470)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_6_OFFSET UNITYSDK_OFFSET(0x1B296490)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_7_OFFSET UNITYSDK_OFFSET(0x1B2964B0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_8_OFFSET UNITYSDK_OFFSET(0x1B2964D0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_9_OFFSET UNITYSDK_OFFSET(0x1B2964F0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2963D0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3881000)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3880FD0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2963B0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3881050)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_GET_NIL_OFFSET UNITYSDK_OFFSET(0x1B2959A0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_SET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x2A90)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3880990)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x3880AD0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x3880B30)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x3880EF0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT16_OFFSET UNITYSDK_OFFSET(0x3880BA0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT32_OFFSET UNITYSDK_OFFSET(0x3880C10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT64_OFFSET UNITYSDK_OFFSET(0x3880D10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x3880FC0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x3880A70)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x3880E10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3880980)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x3880B30)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x3880C90)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x3880D90)
#define UNITYENGINE_GCFREECLOSURE_SVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B295980)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_TypeDefinitionIndex = 4447;

	struct alignas(8) SValue
	{
		static ::UnityEngine::GCFreeClosure::SValue* StaticGet__nil()
		{
			return (::UnityEngine::GCFreeClosure::SValue*)Il2CppClass::FromTypeDefinitionIndex(SValue_TypeDefinitionIndex)->GetStaticField(0x2F290);
		}
		::UnityEngine::GCFreeClosure::SValue_InternalValue _val; // 0x10
		::System::Object* _obj; // 0x18
		::UnityEngine::GCFreeClosure::SValue_Type _ValueType_k__BackingField; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GCFreeClosure::SValue get_nil()
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_GET_NIL_OFFSET))();
		}

		::UnityEngine::GCFreeClosure::SValue_Type get_ValueType()
		{
			return ((::UnityEngine::GCFreeClosure::SValue_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void set_ValueType(::UnityEngine::GCFreeClosure::SValue_Type a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GCFreeClosure::SValue_Type))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_SET_VALUETYPE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean ToBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOBOOLEAN_OFFSET))(this);
		}

		::System::SByte ToSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOSBYTE_OFFSET))(this);
		}

		::System::Byte ToByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOBYTE_OFFSET))(this);
		}

		::System::Char ToChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOCHAR_OFFSET))(this);
		}

		::System::Int16 ToInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT16_OFFSET))(this);
		}

		::System::UInt16 ToUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT16_OFFSET))(this);
		}

		::System::Int32 ToInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT32_OFFSET))(this);
		}

		::System::UInt32 ToUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT32_OFFSET))(this);
		}

		::System::Int64 ToInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOINT64_OFFSET))(this);
		}

		::System::UInt64 ToUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOUINT64_OFFSET))(this);
		}

		::System::Single ToSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOSINGLE_OFFSET))(this);
		}

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TODOUBLE_OFFSET))(this);
		}

		::System::Object* ToObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_TOOBJECT_OFFSET))(this);
		}

		static ::UnityEngine::GCFreeClosure::SValue FromObject(::System::Object* a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_FROMOBJECT_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor(::System::Boolean a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_1(::System::Byte a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_1_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_2(::System::SByte a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::SByte))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_2_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_3(::System::Char a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_3_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_4(::System::Int16 a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_4_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_5(::System::UInt16 a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_5_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_6(::System::Int32 a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_6_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_7(::System::UInt32 a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_7_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_8(::System::Int64& a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Int64&))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_8_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_9(::System::UInt64& a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::UInt64&))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_9_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_10(::System::Single a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_10_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_11(::System::Double& a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_11_OFFSET))(a1);
		}

		static ::UnityEngine::GCFreeClosure::SValue Ctor_12(::System::String* a1)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_CTOR_12_OFFSET))(a1);
		}

		::System::Boolean Equals(::UnityEngine::GCFreeClosure::SValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GCFreeClosure::SValue))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_GETHASHCODE_OFFSET))(this);
		}
	};
}
