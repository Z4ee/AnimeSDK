#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_TERRAINLAYER_GET_DIFFUSETEXTURE_OFFSET UNITYSDK_OFFSET(0x18ABE760)
#define UNITYENGINE_TERRAINLAYER_GET_TILESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE7D0)
#define UNITYENGINE_TERRAINLAYER_GET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x18ABE7A0)
#define UNITYENGINE_TERRAINLAYER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x18ABE750)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE8C0)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_OFFSET UNITYSDK_OFFSET(0x18ABE8B0)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE8A0)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_OFFSET UNITYSDK_OFFSET(0x18ABE890)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSETEXTURE_OFFSET UNITYSDK_OFFSET(0x18ABE770)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE900)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_OFFSET UNITYSDK_OFFSET(0x18ABE8F0)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE8E0)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_OFFSET UNITYSDK_OFFSET(0x18ABE8D0)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x18ABE790)
#define UNITYENGINE_TERRAINLAYER_SET_METALLIC_OFFSET UNITYSDK_OFFSET(0x18ABE860)
#define UNITYENGINE_TERRAINLAYER_SET_NORMALMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x18ABE780)
#define UNITYENGINE_TERRAINLAYER_SET_NORMALSCALE_OFFSET UNITYSDK_OFFSET(0x18ABE880)
#define UNITYENGINE_TERRAINLAYER_SET_SMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x18ABE870)
#define UNITYENGINE_TERRAINLAYER_SET_SPECULAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE850)
#define UNITYENGINE_TERRAINLAYER_SET_SPECULAR_OFFSET UNITYSDK_OFFSET(0x18ABE840)
#define UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE830)
#define UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_OFFSET UNITYSDK_OFFSET(0x18ABE810)
#define UNITYENGINE_TERRAINLAYER_SET_TILESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABE800)
#define UNITYENGINE_TERRAINLAYER_SET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x18ABE7E0)
#define UNITYENGINE_TERRAINLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABE740)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainLayer_TypeDefinitionIndex = 5237;

	class TerrainLayer : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::TerrainLayer* layer)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_INTERNAL_CREATE_OFFSET))(layer);
		}

		::UnityEngine::Texture2D* get_diffuseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_DIFFUSETEXTURE_OFFSET))(this);
		}

		::System::Void set_diffuseTexture(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSETEXTURE_OFFSET))(this, value);
		}

		::System::Void set_normalMapTexture(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_NORMALMAPTEXTURE_OFFSET))(this, value);
		}

		::System::Void set_maskMapTexture(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_tileSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILESIZE_OFFSET))(this);
		}

		::System::Void set_tileSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILESIZE_OFFSET))(this, value);
		}

		::System::Void set_tileOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_OFFSET))(this, value);
		}

		::System::Void set_specular(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SPECULAR_OFFSET))(this, value);
		}

		::System::Void set_metallic(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_METALLIC_OFFSET))(this, value);
		}

		::System::Void set_smoothness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SMOOTHNESS_OFFSET))(this, value);
		}

		::System::Void set_normalScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_NORMALSCALE_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMin(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMax(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMin(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMax(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_OFFSET))(this, value);
		}

		::System::Void get_tileSize_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILESIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_tileSize_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILESIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_tileOffset_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_specular_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SPECULAR_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMin_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMax_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMin_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMax_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_INJECTED_OFFSET))(this, value);
		}
	};
}
