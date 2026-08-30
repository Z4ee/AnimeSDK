#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/DetailRenderMode.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_DETAILPROTOTYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EDD5510)
#define UNITYENGINE_DETAILPROTOTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EDD54B0)
#define UNITYENGINE_DETAILPROTOTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EDD5720)
#define UNITYENGINE_DETAILPROTOTYPE_GET_BENDFACTOR_OFFSET UNITYSDK_OFFSET(0x1EDD53D0)
#define UNITYENGINE_DETAILPROTOTYPE_GET_DRYCOLOR_OFFSET UNITYSDK_OFFSET(0x1EDD5410)
#define UNITYENGINE_DETAILPROTOTYPE_GET_HEALTHYCOLOR_OFFSET UNITYSDK_OFFSET(0x1EDD53F0)
#define UNITYENGINE_DETAILPROTOTYPE_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EDD5390)
#define UNITYENGINE_DETAILPROTOTYPE_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1EDD5350)
#define UNITYENGINE_DETAILPROTOTYPE_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EDD5370)
#define UNITYENGINE_DETAILPROTOTYPE_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1EDD5330)
#define UNITYENGINE_DETAILPROTOTYPE_GET_NOISESPREAD_OFFSET UNITYSDK_OFFSET(0x1EDD53B0)
#define UNITYENGINE_DETAILPROTOTYPE_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1EDD5430)
#define UNITYENGINE_DETAILPROTOTYPE_SET_BENDFACTOR_OFFSET UNITYSDK_OFFSET(0x1EDD53E0)
#define UNITYENGINE_DETAILPROTOTYPE_SET_DRYCOLOR_OFFSET UNITYSDK_OFFSET(0x1EDD5420)
#define UNITYENGINE_DETAILPROTOTYPE_SET_HEALTHYCOLOR_OFFSET UNITYSDK_OFFSET(0x1EDD5400)
#define UNITYENGINE_DETAILPROTOTYPE_SET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EDD53A0)
#define UNITYENGINE_DETAILPROTOTYPE_SET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1EDD5360)
#define UNITYENGINE_DETAILPROTOTYPE_SET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EDD5380)
#define UNITYENGINE_DETAILPROTOTYPE_SET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1EDD5340)
#define UNITYENGINE_DETAILPROTOTYPE_SET_NOISESPREAD_OFFSET UNITYSDK_OFFSET(0x1EDD53C0)
#define UNITYENGINE_DETAILPROTOTYPE_SET_PROTOTYPETEXTURE_OFFSET UNITYSDK_OFFSET(0x1EDD5320)
#define UNITYENGINE_DETAILPROTOTYPE_SET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0x1EDD5310)
#define UNITYENGINE_DETAILPROTOTYPE_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1EDD5440)
#define UNITYENGINE_DETAILPROTOTYPE_SET_USEPROTOTYPEMESH_OFFSET UNITYSDK_OFFSET(0x1EDD5450)
#define UNITYENGINE_DETAILPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD5470)

namespace UnityEngine
{
	inline static constexpr unsigned int DetailPrototype_TypeDefinitionIndex = 5324;

	class DetailPrototype : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* m_Prototype; // 0x10
		::UnityEngine::Texture2D* m_PrototypeTexture; // 0x18
		::UnityEngine::Color m_HealthyColor; // 0x20
		::UnityEngine::Color m_DryColor; // 0x30
		::System::Single m_MinWidth; // 0x40
		::System::Single m_MaxWidth; // 0x44
		::System::Single m_MinHeight; // 0x48
		::System::Single m_MaxHeight; // 0x4C
		::System::Single m_NoiseSpread; // 0x50
		::System::Single m_BendFactor; // 0x54
		::System::Int32 m_RenderMode; // 0x58
		::System::Int32 m_UsePrototypeMesh; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE__CTOR_OFFSET))(this);
		}

		::System::Void set_prototype(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_PROTOTYPE_OFFSET))(this, a1);
		}

		::System::Void set_prototypeTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_PROTOTYPETEXTURE_OFFSET))(this, a1);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Void set_minWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_MINWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Void set_maxWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_MAXWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Void set_minHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_MINHEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Void set_maxHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_MAXHEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_noiseSpread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_NOISESPREAD_OFFSET))(this);
		}

		::System::Void set_noiseSpread(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_NOISESPREAD_OFFSET))(this, a1);
		}

		::System::Single get_bendFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_BENDFACTOR_OFFSET))(this);
		}

		::System::Void set_bendFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_BENDFACTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_healthyColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_HEALTHYCOLOR_OFFSET))(this);
		}

		::System::Void set_healthyColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_HEALTHYCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_dryColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_DRYCOLOR_OFFSET))(this);
		}

		::System::Void set_dryColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_DRYCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::DetailRenderMode get_renderMode()
		{
			return ((::UnityEngine::DetailRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::DetailRenderMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::DetailRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_RENDERMODE_OFFSET))(this, a1);
		}

		::System::Void set_usePrototypeMesh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_SET_USEPROTOTYPEMESH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnityEngine::DetailPrototype* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::DetailPrototype*))((::PBYTE)hIl2Cpp + UNITYENGINE_DETAILPROTOTYPE_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
