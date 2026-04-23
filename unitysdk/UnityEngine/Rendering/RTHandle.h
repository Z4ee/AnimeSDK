#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine::Rendering { class ScaleFunc; }

#define UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET UNITYSDK_OFFSET(0x1A322F30)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_NAMEID_OFFSET UNITYSDK_OFFSET(0x1A322BA0)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A322BC0)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1A322B30)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A322B50)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_RT_OFFSET UNITYSDK_OFFSET(0x1A322B90)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1A322AF0)
#define UNITYENGINE_RENDERING_RTHANDLE_GET_USESCALING_OFFSET UNITYSDK_OFFSET(0x1A322B10)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A322C00)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1A322C30)
#define UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A322BE0)
#define UNITYENGINE_RENDERING_RTHANDLE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A322DE0)
#define UNITYENGINE_RENDERING_RTHANDLE_SETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A322C60)
#define UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A322D20)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_REFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1A322B40)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1A322B00)
#define UNITYENGINE_RENDERING_RTHANDLE_SET_USESCALING_OFFSET UNITYSDK_OFFSET(0x1A322B20)
#define UNITYENGINE_RENDERING_RTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A322BD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandle_TypeDefinitionIndex = 33492;

	class RTHandle : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* m_RT; // 0x10
		::System::String* m_Name; // 0x18
		::UnityEngine::Texture* m_ExternalTexture; // 0x20
		::UnityEngine::Rendering::RTHandleSystem* m_Owner; // 0x28
		::UnityEngine::Rendering::ScaleFunc* scaleFunc; // 0x30
		::System::Boolean m_EnableRandomWrite; // 0x38
		::System::Boolean m_EnableMSAA; // 0x39
		::System::Boolean m_EnableHWDynamicScale; // 0x3A
		::System::Boolean _useScaling_k__BackingField; // 0x3B
		::UnityEngine::Vector2Int _referenceSize_k__BackingField; // 0x3C
		::UnityEngine::Rendering::RenderTargetIdentifier m_NameID; // 0x48
		::UnityEngine::Vector2 _scaleFactor_k__BackingField; // 0x70

		::System::Void _ctor(::UnityEngine::Rendering::RTHandleSystem* owner)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE__CTOR_OFFSET))(this, owner);
		}

		::UnityEngine::Vector2 get_scaleFactor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_SCALEFACTOR_OFFSET))(this, value);
		}

		::System::Boolean get_useScaling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_USESCALING_OFFSET))(this);
		}

		::System::Void set_useScaling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_USESCALING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int get_referenceSize()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_REFERENCESIZE_OFFSET))(this);
		}

		::System::Void set_referenceSize(::UnityEngine::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SET_REFERENCESIZE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_rt()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_RT_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier get_nameID()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_NAMEID_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GET_NAME_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* op_Implicit(::UnityEngine::Rendering::RTHandle* handle)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_OFFSET))(handle);
		}

		static ::UnityEngine::Texture* op_Implicit_1(::UnityEngine::Rendering::RTHandle* handle)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_1_OFFSET))(handle);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_2(::UnityEngine::Rendering::RTHandle* handle)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_OP_IMPLICIT_2_OFFSET))(handle);
		}

		::System::Void SetRenderTexture(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETRENDERTEXTURE_OFFSET))(this, rt);
		}

		::System::Void SetTexture(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_SETTEXTURE_OFFSET))(this, tex);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_RELEASE_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int refSize)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLE_GETSCALEDSIZE_OFFSET))(this, refSize);
		}
	};
}
