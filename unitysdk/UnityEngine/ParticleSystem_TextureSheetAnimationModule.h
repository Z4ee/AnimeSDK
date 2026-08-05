#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemAnimationMode.h"
#include "unitysdk/UnityEngine/Rendering/UVChannelFlags.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123ED0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_OFFSET UNITYSDK_OFFSET(0xA90A60)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123D00)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90940)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123E10)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_OFFSET UNITYSDK_OFFSET(0xA909B0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_LASTSHEETINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123EB0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_LASTSHEETINDEX_OFFSET UNITYSDK_OFFSET(0xA90A50)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123D40)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA90960)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123D60)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_OFFSET UNITYSDK_OFFSET(0xA90970)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123DA0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_OFFSET UNITYSDK_OFFSET(0xA90990)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123E90)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_OFFSET UNITYSDK_OFFSET(0xA90A40)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123E50)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_OFFSET UNITYSDK_OFFSET(0xA90A20)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123D20)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90950)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123E30)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_OFFSET UNITYSDK_OFFSET(0xA909F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123D80)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_OFFSET UNITYSDK_OFFSET(0xA90980)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123DC0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_OFFSET UNITYSDK_OFFSET(0xA909A0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123E70)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_OFFSET UNITYSDK_OFFSET(0xA90A30)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TextureSheetAnimationModule_TypeDefinitionIndex = 7705;

	struct alignas(8) ParticleSystem_TextureSheetAnimationModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemAnimationMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemAnimationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Int32 get_numTilesX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_OFFSET))(this);
		}

		::System::Void set_numTilesX(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_OFFSET))(this, value);
		}

		::System::Int32 get_numTilesY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_OFFSET))(this);
		}

		::System::Void set_numTilesY(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_frameOverTime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_frameOverTime(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_OFFSET))(this, value);
		}
		*/

		::UnityEngine::Rendering::UVChannelFlags get_uvChannelMask()
		{
			return ((::UnityEngine::Rendering::UVChannelFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_OFFSET))(this);
		}

		::System::Void set_uvChannelMask(::UnityEngine::Rendering::UVChannelFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UVChannelFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_OFFSET))(this, value);
		}

		::System::Int32 get_spriteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_OFFSET))(this);
		}

		::System::Single get_lastSheetIndex()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_LASTSHEETINDEX_OFFSET))(this);
		}

		::UnityEngine::Sprite* GetSprite(::System::Int32 index)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_OFFSET))(this, index);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemAnimationMode get_mode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemAnimationMode(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 get_numTilesX_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_numTilesX_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_numTilesY_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_numTilesY_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_frameOverTime_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_frameOverTime_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::UnityEngine::Rendering::UVChannelFlags get_uvChannelMask_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::UnityEngine::Rendering::UVChannelFlags(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_uvChannelMask_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::Rendering::UVChannelFlags value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Rendering::UVChannelFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_spriteCount_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Single get_lastSheetIndex_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_LASTSHEETINDEX_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::Sprite* GetSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_INJECTED_OFFSET))(_unity_self, index);
		}
	};
}
