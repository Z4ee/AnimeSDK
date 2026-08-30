#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnyType_Type.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_ANYTYPE_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3BB6370)
#define UNITYENGINE_ANYTYPE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3BB6300)
#define UNITYENGINE_ANYTYPE_CREATEWITHBOOL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06790)
#define UNITYENGINE_ANYTYPE_CREATEWITHBOOL_OFFSET UNITYSDK_OFFSET(0x1ED06400)
#define UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06780)
#define UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_OFFSET UNITYSDK_OFFSET(0x1ED066E0)
#define UNITYENGINE_ANYTYPE_CREATEWITHLONG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06760)
#define UNITYENGINE_ANYTYPE_CREATEWITHLONG_OFFSET UNITYSDK_OFFSET(0x1ED06630)
#define UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED067A0)
#define UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1ED06710)
#define UNITYENGINE_ANYTYPE_CREATEWITHULONG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06770)
#define UNITYENGINE_ANYTYPE_CREATEWITHULONG_OFFSET UNITYSDK_OFFSET(0x1ED066A0)
#define UNITYENGINE_ANYTYPE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1ED064A0)
#define UNITYENGINE_ANYTYPE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1ED06670)
#define UNITYENGINE_ANYTYPE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1ED06510)
#define UNITYENGINE_ANYTYPE_CREATE_4_OFFSET UNITYSDK_OFFSET(0x1ED06580)
#define UNITYENGINE_ANYTYPE_CREATE_5_OFFSET UNITYSDK_OFFSET(0x1ED065F0)
#define UNITYENGINE_ANYTYPE_CREATE_6_OFFSET UNITYSDK_OFFSET(0x1ED063A0)
#define UNITYENGINE_ANYTYPE_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06750)
#define UNITYENGINE_ANYTYPE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ED063D0)
#define UNITYENGINE_ANYTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB6390)
#define UNITYENGINE_ANYTYPE_GETDETERMINISTICHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED06C10)
#define UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06D70)
#define UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x3BB6590)
#define UNITYENGINE_ANYTYPE_GETHASHCODEWITHSEED_OFFSET UNITYSDK_OFFSET(0x3BB6520)
#define UNITYENGINE_ANYTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BB62F0)
#define UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED067D0)
#define UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x3BB62D0)
#define UNITYENGINE_ANYTYPE_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x3BB62D0)
#define UNITYENGINE_ANYTYPE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1ED059F0)
#define UNITYENGINE_ANYTYPE_HASHCOMBINE_OFFSET UNITYSDK_OFFSET(0x1ED05CD0)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1ED06460)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1ED064E0)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1ED06550)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1ED065B0)
#define UNITYENGINE_ANYTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ED06430)
#define UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06D60)
#define UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x3BB6560)
#define UNITYENGINE_ANYTYPE_TONATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06D10)
#define UNITYENGINE_ANYTYPE_TONATIVESTRING_OFFSET UNITYSDK_OFFSET(0x3BB6530)
#define UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED06D20)
#define UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x3BB62E0)
#define UNITYENGINE_ANYTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BB62E0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnyType_TypeDefinitionIndex = 4295;

	struct alignas(8) AnyType
	{
		::System::Int64 Bytes; // 0x10
		::UnityEngine::AnyType_Type ValueType; // 0x18

		static ::UnityEngine::AnyType get_Default()
		{
			return ((::UnityEngine::AnyType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GET_DEFAULT_OFFSET))();
		}

		static ::UnityEngine::AnyType Create(::System::Boolean a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType op_Implicit(::System::Boolean a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType op_Implicit_1(::System::Int64 a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType op_Implicit_2(::System::UInt32 a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType op_Implicit_3(::System::Double a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType op_Implicit_4(::System::String* a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType Create_1(::System::Int64 a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_1_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType Create_2(::System::UInt32 a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_2_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType Create_3(::System::UInt64 a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_3_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType Create_4(::System::Double a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_4_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType Create_5(::System::Object* a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_5_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType Create_6()
		{
			return ((::UnityEngine::AnyType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_6_OFFSET))();
		}

		static ::UnityEngine::AnyType CreateWithLong(::System::Int64 a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHLONG_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType CreateWithULong(::System::UInt64 a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHULONG_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType CreateWithDouble(::System::Double a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType CreateWithBool(::System::Boolean a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHBOOL_OFFSET))(a1);
		}

		static ::UnityEngine::AnyType CreateWithObject(::System::Object* a1)
		{
			return ((::UnityEngine::AnyType(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_OFFSET))(a1);
		}

		::System::Object* GetObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETOBJECT_OFFSET))(this);
		}

		::System::Object* GetObjectInternal()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::UnityEngine::AnyType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_COMPARETO_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::AnyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnyType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCodeWithSeed(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODEWITHSEED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::NativeString ToNativeString(::System::Boolean a1)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRING_OFFSET))(this, a1);
		}
		*/

		::System::String* ToStringInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_OFFSET))(this);
		}

		/*
		::UnityEngine::NativeString ToNativeStringFormat(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::NativeString(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_OFFSET))(this, a1, a2);
		}
		*/

		::System::Int32 GetHashCodeInternal(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_OFFSET))(this, a1);
		}

		static ::System::Int64 HashCombine(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_HASHCOMBINE_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetDeterministicHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETDETERMINISTICHASHCODE_OFFSET))(a1);
		}

		static ::System::Void Create_Injected(::UnityEngine::AnyType& a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void CreateWithLong_Injected(::System::Int64 a1, ::UnityEngine::AnyType& a2)
		{
			return ((::System::Void(*)(::System::Int64, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHLONG_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void CreateWithULong_Injected(::System::UInt64 a1, ::UnityEngine::AnyType& a2)
		{
			return ((::System::Void(*)(::System::UInt64, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHULONG_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void CreateWithDouble_Injected(::System::Double a1, ::UnityEngine::AnyType& a2)
		{
			return ((::System::Void(*)(::System::Double, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHDOUBLE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void CreateWithBool_Injected(::System::Boolean a1, ::UnityEngine::AnyType& a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHBOOL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void CreateWithObject_Injected(::System::Object* a1, ::UnityEngine::AnyType& a2)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_CREATEWITHOBJECT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Object* GetObjectInternal_Injected(::UnityEngine::AnyType& a1)
		{
			return ((::System::Object*(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETOBJECTINTERNAL_INJECTED_OFFSET))(a1);
		}

		/*
		static ::System::Void ToNativeString_Injected(::UnityEngine::AnyType& a1, ::System::Boolean a2, ::UnityEngine::NativeString& a3)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRING_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::String* ToStringInternal_Injected(::UnityEngine::AnyType& a1)
		{
			return ((::System::String*(*)(::UnityEngine::AnyType&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TOSTRINGINTERNAL_INJECTED_OFFSET))(a1);
		}

		/*
		static ::System::Void ToNativeStringFormat_Injected(::UnityEngine::AnyType& a1, ::System::String* a2, ::System::Boolean a3, ::UnityEngine::NativeString& a4)
		{
			return ((::System::Void(*)(::UnityEngine::AnyType&, ::System::String*, ::System::Boolean, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_TONATIVESTRINGFORMAT_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Int32 GetHashCodeInternal_Injected(::UnityEngine::AnyType& a1, ::System::UInt64 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::AnyType&, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ANYTYPE_GETHASHCODEINTERNAL_INJECTED_OFFSET))(a1, a2);
		}
	};
}
