#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAASPECTRATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4998C0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x96E130)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499880)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFAR_OFFSET UNITYSDK_OFFSET(0x96E110)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFOV_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4998A0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFOV_OFFSET UNITYSDK_OFFSET(0x96E120)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFWD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499840)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFWD_OFFSET UNITYSDK_OFFSET(0x96E0D0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAMOTIONINCLUDED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499920)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAMOTIONINCLUDED_OFFSET UNITYSDK_OFFSET(0x96E160)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERANEAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499860)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERANEAR_OFFSET UNITYSDK_OFFSET(0x96E100)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4997E0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAPOS_OFFSET UNITYSDK_OFFSET(0x96E040)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERARIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499820)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERARIGHT_OFFSET UNITYSDK_OFFSET(0x96E0A0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAUP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499800)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAUP_OFFSET UNITYSDK_OFFSET(0x96E070)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAVIEWTOCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499700)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAVIEWTOCLIP_OFFSET UNITYSDK_OFFSET(0x96DF00)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOCAMERAVIEW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499720)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x96DF40)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOPREVCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499740)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOPREVCLIP_OFFSET UNITYSDK_OFFSET(0x96DF80)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DELTATIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4998E0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x96E140)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DEPTHINVERTED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499900)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DEPTHINVERTED_OFFSET UNITYSDK_OFFSET(0x96E150)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_JITTEROFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499790)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_JITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x96E000)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MOTIONVECTORSDILATED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499960)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MOTIONVECTORSDILATED_OFFSET UNITYSDK_OFFSET(0x96E180)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MVECSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4997C0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MVECSCALE_OFFSET UNITYSDK_OFFSET(0x96E020)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_PREVCLIPTOCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499760)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_PREVCLIPTOCLIP_OFFSET UNITYSDK_OFFSET(0x96DFC0)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_RESET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B499940)
#define UNITYENGINE_RENDERING_FSRCONSTANTS_SET_RESET_OFFSET UNITYSDK_OFFSET(0x96E170)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FSRConstants_TypeDefinitionIndex = 6138;

	struct alignas(4) FSRConstants
	{
		::UnityEngine::Matrix4x4 mat0; // 0x10
		::UnityEngine::Matrix4x4 mat1; // 0x50
		::UnityEngine::Matrix4x4 mat2; // 0x90
		::UnityEngine::Matrix4x4 mat3; // 0xD0
		::UnityEngine::Matrix4x4 mat4; // 0x110
		::UnityEngine::Vector2 vec20; // 0x150
		::UnityEngine::Vector2 vec21; // 0x158
		::UnityEngine::Vector2 vec22; // 0x160
		::UnityEngine::Vector3 vec30; // 0x168
		::UnityEngine::Vector3 vec31; // 0x174
		::UnityEngine::Vector3 vec32; // 0x180
		::UnityEngine::Vector3 vec33; // 0x18C
		::System::Single f0; // 0x198
		::System::Single f1; // 0x19C
		::System::Single f2; // 0x1A0
		::System::Single f3; // 0x1A4
		::System::Single f4; // 0x1A8
		::System::Single f5; // 0x1AC
		::System::UInt32 u0; // 0x1B0
		::System::Single f6; // 0x1B4

		::System::Void set_cameraViewToClip(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAVIEWTOCLIP_OFFSET))(this, value);
		}

		::System::Void set_clipToCameraView(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOCAMERAVIEW_OFFSET))(this, value);
		}

		::System::Void set_clipToPrevClip(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOPREVCLIP_OFFSET))(this, value);
		}

		::System::Void set_prevClipToClip(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_PREVCLIPTOCLIP_OFFSET))(this, value);
		}

		::System::Void set_jitterOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_JITTEROFFSET_OFFSET))(this, value);
		}

		::System::Void set_mvecScale(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MVECSCALE_OFFSET))(this, value);
		}

		::System::Void set_cameraPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAPOS_OFFSET))(this, value);
		}

		::System::Void set_cameraUp(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAUP_OFFSET))(this, value);
		}

		::System::Void set_cameraRight(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERARIGHT_OFFSET))(this, value);
		}

		::System::Void set_cameraFwd(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFWD_OFFSET))(this, value);
		}

		::System::Void set_cameraNear(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERANEAR_OFFSET))(this, value);
		}

		::System::Void set_cameraFar(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFAR_OFFSET))(this, value);
		}

		::System::Void set_cameraFOV(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFOV_OFFSET))(this, value);
		}

		::System::Void set_cameraAspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAASPECTRATIO_OFFSET))(this, value);
		}

		::System::Void set_deltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DELTATIME_OFFSET))(this, value);
		}

		::System::Void set_depthInverted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DEPTHINVERTED_OFFSET))(this, value);
		}

		::System::Void set_cameraMotionIncluded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAMOTIONINCLUDED_OFFSET))(this, value);
		}

		::System::Void set_reset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_RESET_OFFSET))(this, value);
		}

		::System::Void set_motionVectorsDilated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MOTIONVECTORSDILATED_OFFSET))(this, value);
		}

		static ::System::Void set_cameraViewToClip_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAVIEWTOCLIP_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_clipToCameraView_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOCAMERAVIEW_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_clipToPrevClip_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CLIPTOPREVCLIP_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_prevClipToClip_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_PREVCLIPTOCLIP_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_jitterOffset_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_JITTEROFFSET_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_mvecScale_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MVECSCALE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraPos_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAPOS_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraUp_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAUP_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraRight_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERARIGHT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraFwd_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFWD_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraNear_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERANEAR_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraFar_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFAR_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraFOV_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAFOV_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraAspectRatio_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAASPECTRATIO_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_deltaTime_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DELTATIME_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_depthInverted_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_DEPTHINVERTED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_cameraMotionIncluded_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_CAMERAMOTIONINCLUDED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_reset_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_RESET_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_motionVectorsDilated_Injected(::UnityEngine::Rendering::FSRConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::FSRConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FSRCONSTANTS_SET_MOTIONVECTORSDILATED_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
