#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemAnimationMode.h"
#include "unitysdk/UnityEngine/ParticleSystemAnimationRowMode.h"
#include "unitysdk/UnityEngine/ParticleSystemAnimationTimeMode.h"
#include "unitysdk/UnityEngine/ParticleSystemAnimationType.h"
#include "unitysdk/UnityEngine/Rendering/UVChannelFlags.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F0F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_OFFSET UNITYSDK_OFFSET(0x3894940)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F150)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x3894970)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EDC0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x3894720)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EFA0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x3894880)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EC40)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3894660)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ED00)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_OFFSET UNITYSDK_OFFSET(0x38946C0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EEB0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38947D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EE70)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_OFFSET UNITYSDK_OFFSET(0x3894760)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EC80)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x3894680)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ED40)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_OFFSET UNITYSDK_OFFSET(0x38946E0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ED80)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_OFFSET UNITYSDK_OFFSET(0x3894700)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EFE0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_OFFSET UNITYSDK_OFFSET(0x38948A0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EE00)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_OFFSET UNITYSDK_OFFSET(0x3894740)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F0A0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_OFFSET UNITYSDK_OFFSET(0x38948F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F060)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_OFFSET UNITYSDK_OFFSET(0x38948E0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EF60)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3894860)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EF20)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x38947F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ECC0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_OFFSET UNITYSDK_OFFSET(0x38946A0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F020)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x38948C0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F110)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_OFFSET UNITYSDK_OFFSET(0x3894950)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F130)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x3894960)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EDE0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x3894730)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EFC0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x3894890)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EC60)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3894670)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ED20)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_OFFSET UNITYSDK_OFFSET(0x38946D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EED0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38947E0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EE90)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_OFFSET UNITYSDK_OFFSET(0x38947A0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ECA0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3894690)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ED60)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_OFFSET UNITYSDK_OFFSET(0x38946F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EDA0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_OFFSET UNITYSDK_OFFSET(0x3894710)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F000)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_OFFSET UNITYSDK_OFFSET(0x38948B0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EE20)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_OFFSET UNITYSDK_OFFSET(0x3894750)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F0D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_OFFSET UNITYSDK_OFFSET(0x3894920)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EF80)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3894870)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EF40)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x3894830)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ECE0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_OFFSET UNITYSDK_OFFSET(0x38946B0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F040)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x38948D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TextureSheetAnimationModule_TypeDefinitionIndex = 5716;

	struct alignas(8) ParticleSystem_TextureSheetAnimationModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemAnimationMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemAnimationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemAnimationMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemAnimationTimeMode get_timeMode()
		{
			return ((::UnityEngine::ParticleSystemAnimationTimeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_OFFSET))(this);
		}

		::System::Void set_timeMode(::UnityEngine::ParticleSystemAnimationTimeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationTimeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_OFFSET))(this, a1);
		}

		::System::Single get_fps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_OFFSET))(this);
		}

		::System::Void set_fps(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_OFFSET))(this, a1);
		}

		::System::Int32 get_numTilesX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_OFFSET))(this);
		}

		::System::Void set_numTilesX(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_OFFSET))(this, a1);
		}

		::System::Int32 get_numTilesY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_OFFSET))(this);
		}

		::System::Void set_numTilesY(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemAnimationType get_animation()
		{
			return ((::UnityEngine::ParticleSystemAnimationType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_OFFSET))(this);
		}

		::System::Void set_animation(::UnityEngine::ParticleSystemAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemAnimationRowMode get_rowMode()
		{
			return ((::UnityEngine::ParticleSystemAnimationRowMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_OFFSET))(this);
		}

		::System::Void set_rowMode(::UnityEngine::ParticleSystemAnimationRowMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationRowMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_frameOverTime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_frameOverTime(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_OFFSET))(this, a1);
		}
		*/

		::System::Single get_frameOverTimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_frameOverTimeMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startFrame()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startFrame(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_OFFSET))(this, a1);
		}
		*/

		::System::Single get_startFrameMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startFrameMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Int32 get_cycleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_OFFSET))(this);
		}

		::System::Void set_cycleCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_rowIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_OFFSET))(this);
		}

		::System::Void set_rowIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::UVChannelFlags get_uvChannelMask()
		{
			return ((::UnityEngine::Rendering::UVChannelFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_OFFSET))(this);
		}

		::System::Void set_uvChannelMask(::UnityEngine::Rendering::UVChannelFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UVChannelFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_OFFSET))(this, a1);
		}

		::System::Int32 get_spriteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_speedRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_speedRange(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_OFFSET))(this, a1);
		}
		*/

		::System::Void AddSprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_OFFSET))(this, a1);
		}

		::System::Void RemoveSprite(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_OFFSET))(this, a1);
		}

		::System::Void SetSprite(::System::Int32 a1, ::UnityEngine::Sprite* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Sprite* GetSprite(::System::Int32 a1)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemAnimationMode get_mode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::UnityEngine::ParticleSystemAnimationMode(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystemAnimationMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemAnimationTimeMode get_timeMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::UnityEngine::ParticleSystemAnimationTimeMode(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_timeMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystemAnimationTimeMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationTimeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_fps_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_fps_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_numTilesX_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_numTilesX_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_numTilesY_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_numTilesY_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemAnimationType get_animation_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::UnityEngine::ParticleSystemAnimationType(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_animation_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystemAnimationType a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemAnimationRowMode get_rowMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::UnityEngine::ParticleSystemAnimationRowMode(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_rowMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystemAnimationRowMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationRowMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_frameOverTime_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_frameOverTime_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_frameOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_frameOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_startFrame_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_startFrame_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_startFrameMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_startFrameMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_cycleCount_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_cycleCount_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_rowIndex_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_rowIndex_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::UVChannelFlags get_uvChannelMask_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::UnityEngine::Rendering::UVChannelFlags(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_uvChannelMask_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::Rendering::UVChannelFlags a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Rendering::UVChannelFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_spriteCount_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_INJECTED_OFFSET))(a1);
		}

		/*
		static ::System::Void get_speedRange_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_speedRange_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Void AddSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::UnityEngine::Sprite* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Int32 a2, ::UnityEngine::Sprite* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Sprite* GetSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_INJECTED_OFFSET))(a1, a2);
		}
	};
}
