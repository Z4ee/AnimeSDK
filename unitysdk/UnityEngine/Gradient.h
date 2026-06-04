#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/GradientAlphaKey.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"
#include "unitysdk/UnityEngine/GradientMode.h"

#define UNITYENGINE_GRADIENT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B299090)
#define UNITYENGINE_GRADIENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B2992C0)
#define UNITYENGINE_GRADIENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B299200)
#define UNITYENGINE_GRADIENT_EVALUATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B299180)
#define UNITYENGINE_GRADIENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B299140)
#define UNITYENGINE_GRADIENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2990D0)
#define UNITYENGINE_GRADIENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B299340)
#define UNITYENGINE_GRADIENT_GET_ALPHAKEYS_OFFSET UNITYSDK_OFFSET(0x1B2991B0)
#define UNITYENGINE_GRADIENT_GET_COLORKEYS_OFFSET UNITYSDK_OFFSET(0x1B299190)
#define UNITYENGINE_GRADIENT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1B2991D0)
#define UNITYENGINE_GRADIENT_INIT_OFFSET UNITYSDK_OFFSET(0x1B299080)
#define UNITYENGINE_GRADIENT_INTERNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2990A0)
#define UNITYENGINE_GRADIENT_SETKEYS_OFFSET UNITYSDK_OFFSET(0x1B2991F0)
#define UNITYENGINE_GRADIENT_SET_ALPHAKEYS_OFFSET UNITYSDK_OFFSET(0x1B2991C0)
#define UNITYENGINE_GRADIENT_SET_COLORKEYS_OFFSET UNITYSDK_OFFSET(0x1B2991A0)
#define UNITYENGINE_GRADIENT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1B2991E0)
#define UNITYENGINE_GRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2990B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Gradient_TypeDefinitionIndex = 4207;

	class Gradient : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr Init()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_INIT_OFFSET))();
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_CLEANUP_OFFSET))(this);
		}

		::System::Boolean Internal_Equals(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_INTERNAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_FINALIZE_OFFSET))(this);
		}

		::UnityEngine::Color Evaluate(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EVALUATE_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::GradientColorKey>* get_colorKeys()
		{
			return ((::Il2CppArray<::UnityEngine::GradientColorKey>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_COLORKEYS_OFFSET))(this);
		}

		::System::Void set_colorKeys(::Il2CppArray<::UnityEngine::GradientColorKey>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GradientColorKey>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_COLORKEYS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::GradientAlphaKey>* get_alphaKeys()
		{
			return ((::Il2CppArray<::UnityEngine::GradientAlphaKey>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_ALPHAKEYS_OFFSET))(this);
		}

		::System::Void set_alphaKeys(::Il2CppArray<::UnityEngine::GradientAlphaKey>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GradientAlphaKey>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_ALPHAKEYS_OFFSET))(this, a1);
		}

		::UnityEngine::GradientMode get_mode()
		{
			return ((::UnityEngine::GradientMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::GradientMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_MODE_OFFSET))(this, a1);
		}

		::System::Void SetKeys(::Il2CppArray<::UnityEngine::GradientColorKey>* a1, ::Il2CppArray<::UnityEngine::GradientAlphaKey>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GradientColorKey>*, ::Il2CppArray<::UnityEngine::GradientAlphaKey>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SETKEYS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Gradient* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Evaluate_Injected(::System::Single a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EVALUATE_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
