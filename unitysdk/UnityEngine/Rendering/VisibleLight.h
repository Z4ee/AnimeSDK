#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLightFlags.h"

namespace System { class Object; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA12BD0)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA12B60)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA12C90)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_FINALCOLOR_OFFSET UNITYSDK_OFFSET(0x41EB10)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHT_OFFSET UNITYSDK_OFFSET(0xA12A80)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0xA12B10)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0xA12B40)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x9E5B10)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_SET_RANGE_OFFSET UNITYSDK_OFFSET(0xA12B50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VisibleLight_TypeDefinitionIndex = 6274;

	struct alignas(4) VisibleLight
	{
		::UnityEngine::LightType m_LightType; // 0x10
		::UnityEngine::Color m_FinalColor; // 0x14
		::UnityEngine::Rect m_ScreenRect; // 0x24
		::UnityEngine::Matrix4x4 m_LocalToWorldMatrix; // 0x34
		::System::Single m_Range; // 0x74
		::System::Single m_SpotAngle; // 0x78
		::System::Int32 m_InstanceId; // 0x7C
		::UnityEngine::Rendering::VisibleLightFlags m_Flags; // 0x80

		::UnityEngine::Light* get_light()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHT_OFFSET))(this);
		}

		::UnityEngine::LightType get_lightType()
		{
			return ((::UnityEngine::LightType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LIGHTTYPE_OFFSET))(this);
		}

		::UnityEngine::Color get_finalColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_FINALCOLOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::System::Single get_range()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_RANGE_OFFSET))(this);
		}

		::System::Void set_range(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_SET_RANGE_OFFSET))(this, value);
		}

		::System::Single get_spotAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GET_SPOTANGLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::VisibleLight other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VisibleLight))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GETHASHCODE_OFFSET))(this);
		}
	};
}
