#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define UNITYENGINE_GL_CLEAR_OFFSET UNITYSDK_OFFSET(0x18A0D3D0)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A0D340)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x18A0D2E0)
#define UNITYENGINE_GL_GLCLEAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A0D3C0)
#define UNITYENGINE_GL_GLCLEAR_OFFSET UNITYSDK_OFFSET(0x18A0D3B0)
#define UNITYENGINE_GL_GLISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x18A0D350)
#define UNITYENGINE_GL_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x18A0D360)

namespace UnityEngine
{
	inline static constexpr unsigned int GL_TypeDefinitionIndex = 3931;

	class GL : public ::System::Object
	{
	public:
		static ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(::UnityEngine::Matrix4x4 proj, ::System::Boolean renderIntoTexture)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_OFFSET))(proj, renderIntoTexture);
		}

		static ::System::Void GLIssuePluginEvent(::System::IntPtr callback, ::System::Int32 eventID)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLISSUEPLUGINEVENT_OFFSET))(callback, eventID);
		}

		static ::System::Void IssuePluginEvent(::System::IntPtr callback, ::System::Int32 eventID)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_ISSUEPLUGINEVENT_OFFSET))(callback, eventID);
		}

		static ::System::Void GLClear(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLCLEAR_OFFSET))(clearDepth, clearColor, backgroundColor, depth);
		}

		static ::System::Void Clear(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_CLEAR_OFFSET))(clearDepth, clearColor, backgroundColor);
		}

		static ::System::Void GetGPUProjectionMatrix_Injected(::UnityEngine::Matrix4x4& proj, ::System::Boolean renderIntoTexture, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Boolean, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_INJECTED_OFFSET))(proj, renderIntoTexture, ret);
		}

		static ::System::Void GLClear_Injected(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color& backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLCLEAR_INJECTED_OFFSET))(clearDepth, clearColor, backgroundColor, depth);
		}
	};
}
