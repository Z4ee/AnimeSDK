#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define UNITYENGINE_GL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DEDDB50)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DEDDA90)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1DEDDA30)
#define UNITYENGINE_GL_GLCLEAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DEDDB40)
#define UNITYENGINE_GL_GLCLEAR_OFFSET UNITYSDK_OFFSET(0x1DEDDB30)
#define UNITYENGINE_GL_GLISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x1DEDDAA0)
#define UNITYENGINE_GL_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x1DEDDAB0)

namespace UnityEngine
{
	inline static constexpr unsigned int GL_TypeDefinitionIndex = 4122;

	class GL : public ::System::Object
	{
	public:
		static ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(::UnityEngine::Matrix4x4 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_OFFSET))(a1, a2);
		}

		static ::System::Void GLIssuePluginEvent(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLISSUEPLUGINEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void IssuePluginEvent(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_ISSUEPLUGINEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void GLClear(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLCLEAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Clear(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_CLEAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetGPUProjectionMatrix_Injected(::UnityEngine::Matrix4x4& a1, ::System::Boolean a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Boolean, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GLClear_Injected(::System::Boolean a1, ::System::Boolean a2, ::UnityEngine::Color& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLCLEAR_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
