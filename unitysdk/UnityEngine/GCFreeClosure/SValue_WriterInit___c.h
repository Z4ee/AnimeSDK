#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue.h"

namespace System { class String; }

#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4468F0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A446920)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A446930)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_10_OFFSET UNITYSDK_OFFSET(0x1A446C30)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_11_OFFSET UNITYSDK_OFFSET(0x1A446C70)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_12_OFFSET UNITYSDK_OFFSET(0x1A446CC0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_13_OFFSET UNITYSDK_OFFSET(0x1A446D10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1A446980)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0x1A4469D0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_3_OFFSET UNITYSDK_OFFSET(0x1A446A20)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_4_OFFSET UNITYSDK_OFFSET(0x1A446A70)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_5_OFFSET UNITYSDK_OFFSET(0x1A446AC0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_6_OFFSET UNITYSDK_OFFSET(0x1A446B10)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_7_OFFSET UNITYSDK_OFFSET(0x1A446B60)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_8_OFFSET UNITYSDK_OFFSET(0x1A446BB0)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_9_OFFSET UNITYSDK_OFFSET(0x1A446BF0)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_WriterInit___c_TypeDefinitionIndex = 4279;

	class SValue_WriterInit___c : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::SValue_WriterInit___c** StaticGet___9()
		{
			return (::UnityEngine::GCFreeClosure::SValue_WriterInit___c**)Il2CppClass::FromTypeDefinitionIndex(SValue_WriterInit___c_TypeDefinitionIndex)->GetStaticField(0x15100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_0(::System::Boolean v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_0_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_1(::System::Char v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_1_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_2(::System::Byte v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_2_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_3(::System::SByte v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_3_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_4(::System::Int16 v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_4_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_5(::System::UInt16 v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_5_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_6(::System::Int32 v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_6_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_7(::System::UInt32 v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_7_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_8(::System::Int64 v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_8_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_9(::System::UInt64 v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_9_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_10(::System::String* v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_10_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_11(::System::Single v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_11_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_12(::System::Double v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_12_OFFSET))(this, v);
		}

		::UnityEngine::GCFreeClosure::SValue __cctor_b__0_13(::System::Object* v)
		{
			return ((::UnityEngine::GCFreeClosure::SValue(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_WRITERINIT___C___CCTOR_B__0_13_OFFSET))(this, v);
		}
	};
}
