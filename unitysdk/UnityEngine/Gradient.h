#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/GradientAlphaKey.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"
#include "unitysdk/UnityEngine/GradientMode.h"

#define UNITYENGINE_GRADIENT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1A447DD0)
#define UNITYENGINE_GRADIENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A448000)
#define UNITYENGINE_GRADIENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A447F40)
#define UNITYENGINE_GRADIENT_EVALUATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447EC0)
#define UNITYENGINE_GRADIENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A447E80)
#define UNITYENGINE_GRADIENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A447E10)
#define UNITYENGINE_GRADIENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A448070)
#define UNITYENGINE_GRADIENT_GET_ALPHAKEYS_OFFSET UNITYSDK_OFFSET(0x1A447EF0)
#define UNITYENGINE_GRADIENT_GET_COLORKEYS_OFFSET UNITYSDK_OFFSET(0x1A447ED0)
#define UNITYENGINE_GRADIENT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A447F10)
#define UNITYENGINE_GRADIENT_INIT_OFFSET UNITYSDK_OFFSET(0x1A447DC0)
#define UNITYENGINE_GRADIENT_INTERNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A447DE0)
#define UNITYENGINE_GRADIENT_SETKEYS_OFFSET UNITYSDK_OFFSET(0x1A447F30)
#define UNITYENGINE_GRADIENT_SET_ALPHAKEYS_OFFSET UNITYSDK_OFFSET(0x1A447F00)
#define UNITYENGINE_GRADIENT_SET_COLORKEYS_OFFSET UNITYSDK_OFFSET(0x1A447EE0)
#define UNITYENGINE_GRADIENT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A447F20)
#define UNITYENGINE_GRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A447DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Gradient_TypeDefinitionIndex = 4033;

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

		::System::Boolean Internal_Equals(::System::IntPtr other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_INTERNAL_EQUALS_OFFSET))(this, other);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_FINALIZE_OFFSET))(this);
		}

		::UnityEngine::Color Evaluate(::System::Single time)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EVALUATE_OFFSET))(this, time);
		}

		::Il2CppArray<::UnityEngine::GradientColorKey>* get_colorKeys()
		{
			return ((::Il2CppArray<::UnityEngine::GradientColorKey>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_COLORKEYS_OFFSET))(this);
		}

		::System::Void set_colorKeys(::Il2CppArray<::UnityEngine::GradientColorKey>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GradientColorKey>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_COLORKEYS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::GradientAlphaKey>* get_alphaKeys()
		{
			return ((::Il2CppArray<::UnityEngine::GradientAlphaKey>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_ALPHAKEYS_OFFSET))(this);
		}

		::System::Void set_alphaKeys(::Il2CppArray<::UnityEngine::GradientAlphaKey>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GradientAlphaKey>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_ALPHAKEYS_OFFSET))(this, value);
		}

		::UnityEngine::GradientMode get_mode()
		{
			return ((::UnityEngine::GradientMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::GradientMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientMode))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_MODE_OFFSET))(this, value);
		}

		::System::Void SetKeys(::Il2CppArray<::UnityEngine::GradientColorKey>* colorKeys, ::Il2CppArray<::UnityEngine::GradientAlphaKey>* alphaKeys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GradientColorKey>*, ::Il2CppArray<::UnityEngine::GradientAlphaKey>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SETKEYS_OFFSET))(this, colorKeys, alphaKeys);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EQUALS_OFFSET))(this, o);
		}

		::System::Boolean Equals_1(::UnityEngine::Gradient* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Evaluate_Injected(::System::Single time, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EVALUATE_INJECTED_OFFSET))(this, time, ret);
		}
	};
}
