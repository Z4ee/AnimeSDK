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

#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1D60)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_OFFSET UNITYSDK_OFFSET(0x22F5430)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1DC0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x22F5460)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1A30)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x22F5210)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1C10)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x22F5370)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D18B0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F5150)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1970)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_OFFSET UNITYSDK_OFFSET(0x22F51B0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1B20)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F52C0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1AE0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIME_OFFSET UNITYSDK_OFFSET(0x22F5250)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D18F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x22F5170)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D19B0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESX_OFFSET UNITYSDK_OFFSET(0x22F51D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D19F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_NUMTILESY_OFFSET UNITYSDK_OFFSET(0x22F51F0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1C50)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_OFFSET UNITYSDK_OFFSET(0x22F5390)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1A70)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_OFFSET UNITYSDK_OFFSET(0x22F5230)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1D10)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_OFFSET UNITYSDK_OFFSET(0x22F53E0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1CD0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPRITECOUNT_OFFSET UNITYSDK_OFFSET(0x22F53D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1BD0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5350)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1B90)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x22F52E0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1930)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_OFFSET UNITYSDK_OFFSET(0x22F5190)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1C90)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_UVCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x22F53B0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1D80)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_OFFSET UNITYSDK_OFFSET(0x22F5440)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1DA0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x22F5450)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1A50)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x22F5220)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1C30)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_OFFSET UNITYSDK_OFFSET(0x22F5380)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D18D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F5160)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1990)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_OFFSET UNITYSDK_OFFSET(0x22F51C0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1B40)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F52D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1B00)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIME_OFFSET UNITYSDK_OFFSET(0x22F5290)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1910)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x22F5180)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D19D0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESX_OFFSET UNITYSDK_OFFSET(0x22F51E0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1A10)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_NUMTILESY_OFFSET UNITYSDK_OFFSET(0x22F5200)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1C70)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_OFFSET UNITYSDK_OFFSET(0x22F53A0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1A90)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_OFFSET UNITYSDK_OFFSET(0x22F5240)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1D40)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_OFFSET UNITYSDK_OFFSET(0x22F5410)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1BF0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5360)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1BB0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_OFFSET UNITYSDK_OFFSET(0x22F5320)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1950)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_OFFSET UNITYSDK_OFFSET(0x22F51A0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D1CB0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_UVCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x22F53C0)
#define UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TextureSheetAnimationModule_TypeDefinitionIndex = 5439;

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

		::System::Void set_mode(::UnityEngine::ParticleSystemAnimationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemAnimationTimeMode get_timeMode()
		{
			return ((::UnityEngine::ParticleSystemAnimationTimeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_OFFSET))(this);
		}

		::System::Void set_timeMode(::UnityEngine::ParticleSystemAnimationTimeMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationTimeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_OFFSET))(this, value);
		}

		::System::Single get_fps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_OFFSET))(this);
		}

		::System::Void set_fps(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_OFFSET))(this, value);
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

		::UnityEngine::ParticleSystemAnimationType get_animation()
		{
			return ((::UnityEngine::ParticleSystemAnimationType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_OFFSET))(this);
		}

		::System::Void set_animation(::UnityEngine::ParticleSystemAnimationType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemAnimationRowMode get_rowMode()
		{
			return ((::UnityEngine::ParticleSystemAnimationRowMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_OFFSET))(this);
		}

		::System::Void set_rowMode(::UnityEngine::ParticleSystemAnimationRowMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemAnimationRowMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_OFFSET))(this, value);
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

		::System::Single get_frameOverTimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_frameOverTimeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startFrame()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startFrame(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_OFFSET))(this, value);
		}
		*/

		::System::Single get_startFrameMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startFrameMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_OFFSET))(this, value);
		}

		::System::Int32 get_cycleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_OFFSET))(this);
		}

		::System::Void set_cycleCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_rowIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_OFFSET))(this);
		}

		::System::Void set_rowIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_OFFSET))(this, value);
		}

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

		/*
		::UnityEngine::Vector2 get_speedRange()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_speedRange(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_OFFSET))(this, value);
		}
		*/

		::System::Void AddSprite(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_OFFSET))(this, sprite);
		}

		::System::Void RemoveSprite(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_OFFSET))(this, index);
		}

		::System::Void SetSprite(::System::Int32 index, ::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_OFFSET))(this, index, sprite);
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

		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystemAnimationMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_MODE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemAnimationTimeMode get_timeMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemAnimationTimeMode(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_TIMEMODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_timeMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystemAnimationTimeMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationTimeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_TIMEMODE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_fps_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FPS_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_fps_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FPS_INJECTED_OFFSET))(_unity_self, value);
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

		static ::UnityEngine::ParticleSystemAnimationType get_animation_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemAnimationType(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ANIMATION_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_animation_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystemAnimationType value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationType))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ANIMATION_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemAnimationRowMode get_rowMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemAnimationRowMode(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWMODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_rowMode_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystemAnimationRowMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystemAnimationRowMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWMODE_INJECTED_OFFSET))(_unity_self, value);
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

		static ::System::Single get_frameOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_frameOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_FRAMEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startFrame_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startFrame_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startFrameMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startFrameMultiplier_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_STARTFRAMEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_cycleCount_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_CYCLECOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_cycleCount_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_CYCLECOUNT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_rowIndex_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_ROWINDEX_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_rowIndex_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_ROWINDEX_INJECTED_OFFSET))(_unity_self, value);
		}

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

		/*
		static ::System::Void get_speedRange_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GET_SPEEDRANGE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_speedRange_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SET_SPEEDRANGE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Void AddSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_ADDSPRITE_INJECTED_OFFSET))(_unity_self, sprite);
		}

		static ::System::Void RemoveSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_REMOVESPRITE_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::System::Void SetSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 index, ::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_SETSPRITE_INJECTED_OFFSET))(_unity_self, index, sprite);
		}

		static ::UnityEngine::Sprite* GetSprite_Injected(::UnityEngine::ParticleSystem_TextureSheetAnimationModule& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::ParticleSystem_TextureSheetAnimationModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TEXTURESHEETANIMATIONMODULE_GETSPRITE_INJECTED_OFFSET))(_unity_self, index);
		}
	};
}
