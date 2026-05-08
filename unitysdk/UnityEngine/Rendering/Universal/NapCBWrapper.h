#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CharacterDynamicParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCBProperty.h"
#include "unitysdk/UnityEngine/Vector4.h"

class NapRenderer;
class VectorArrayBuffer;

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDBUFFER_OFFSET UNITYSDK_OFFSET(0x1AD0D560)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_BINDNAPCBUFFER_OFFSET UNITYSDK_OFFSET(0x1AD0D760)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1AD0EDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_GET_OFFSET UNITYSDK_OFFSET(0x1AD0D420)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1AD0D250)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_RESET_OFFSET UNITYSDK_OFFSET(0x1AD0EF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1AD0EEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SETPERMATERIALBUFFER_OFFSET UNITYSDK_OFFSET(0x1AD0DD20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SET_OFFSET UNITYSDK_OFFSET(0x1AD0D2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER_SYNCTOGPUIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1AD0DC80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCBWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0EF90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCBWrapper_TypeDefinitionIndex = 30075;

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
