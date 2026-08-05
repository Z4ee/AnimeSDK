#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CharacterDynamicParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCBProperty.h"
#include "unitysdk/UnityEngine/Vector4.h"

class NapRenderer;
class VectorArrayBuffer;

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDBUFFER_OFFSET UNITYSDK_OFFSET(0x1D6EB7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDNAPCBUFFER_OFFSET UNITYSDK_OFFSET(0x1D6EBA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D6ECFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_GET_OFFSET UNITYSDK_OFFSET(0x1D6EB6B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1D6EB4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_RESET_OFFSET UNITYSDK_OFFSET(0x1D6ED120)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1D6ED0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETPERMATERIALBUFFER_OFFSET UNITYSDK_OFFSET(0x1D6EBFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SET_OFFSET UNITYSDK_OFFSET(0x1D6EB580)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SYNCTOGPUIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1D6EBF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCBWrapper_TypeDefinitionIndex = 27804;

	class NapCBWrapper : public ::System::Object
	{
	public:
		::VectorArrayBuffer* napCB; // 0x10
		::System::Boolean dirty; // 0x18
		::CharacterDynamicParams targetState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_INIT_OFFSET))(this);
		}

		::System::Void Set(::UnityEngine::Rendering::Universal::NapCBProperty property, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapCBProperty, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SET_OFFSET))(this, property, value);
		}

		::UnityEngine::Vector4 Get(::UnityEngine::Rendering::Universal::NapCBProperty property)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapCBProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_GET_OFFSET))(this, property);
		}

		::System::Void BindBuffer(::Il2CppArray<::NapRenderer*>* napRenderers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NapRenderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDBUFFER_OFFSET))(this, napRenderers);
		}

		::System::Void SyncToGPUIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SYNCTOGPUIFDIRTY_OFFSET))(this);
		}

		::System::Void BindNapCBuffer(::NapRenderer* napRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDNAPCBUFFER_OFFSET))(this, napRenderer);
		}

		::System::Void SetPerMaterialBuffer(::NapRenderer* napRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETPERMATERIALBUFFER_OFFSET))(this, napRenderer);
		}

		::System::Void Destroy(::Il2CppArray<::NapRenderer*>* napRenderers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NapRenderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_DESTROY_OFFSET))(this, napRenderers);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETDIRTY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_RESET_OFFSET))(this);
		}
	};
}
