#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_GL_BEGIN_OFFSET UNITYSDK_OFFSET(0x1D6A5280)
#define UNITYENGINE_GL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D6A52C0)
#define UNITYENGINE_GL_COLOR_OFFSET UNITYSDK_OFFSET(0x1D6A50A0)
#define UNITYENGINE_GL_END_OFFSET UNITYSDK_OFFSET(0x1D6A5290)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6A51E0)
#define UNITYENGINE_GL_GETGPUPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1D6A5180)
#define UNITYENGINE_GL_GLCLEAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6A52B0)
#define UNITYENGINE_GL_GLCLEAR_OFFSET UNITYSDK_OFFSET(0x1D6A52A0)
#define UNITYENGINE_GL_GLISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x1D6A51F0)
#define UNITYENGINE_GL_IMMEDIATECOLOR_OFFSET UNITYSDK_OFFSET(0x1D6A5090)
#define UNITYENGINE_GL_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x1D6A5200)
#define UNITYENGINE_GL_LOADIDENTITY_OFFSET UNITYSDK_OFFSET(0x1D6A5150)
#define UNITYENGINE_GL_LOADPROJECTIONMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6A5170)
#define UNITYENGINE_GL_LOADPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1D6A5160)
#define UNITYENGINE_GL_POPMATRIX_OFFSET UNITYSDK_OFFSET(0x1D6A5140)
#define UNITYENGINE_GL_PUSHMATRIX_OFFSET UNITYSDK_OFFSET(0x1D6A5130)
#define UNITYENGINE_GL_SETVIEWMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6A50E0)
#define UNITYENGINE_GL_SETVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0x1D6A50D0)
#define UNITYENGINE_GL_SET_INVERTCULLING_OFFSET UNITYSDK_OFFSET(0x1D6A50C0)
#define UNITYENGINE_GL_SET_MODELVIEW_OFFSET UNITYSDK_OFFSET(0x1D6A50F0)
#define UNITYENGINE_GL_VERTEX3_OFFSET UNITYSDK_OFFSET(0x1D6A5060)
#define UNITYENGINE_GL_VERTEX_OFFSET UNITYSDK_OFFSET(0x1D6A5070)
#define UNITYENGINE_GL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A52F0)

namespace UnityEngine
{
	inline static constexpr unsigned int GL_TypeDefinitionIndex = 5181;

	class GL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GL__CTOR_OFFSET))(this);
		}

		static ::System::Void Vertex3(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_VERTEX3_OFFSET))(x, y, z);
		}

		static ::System::Void Vertex(::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_VERTEX_OFFSET))(v);
		}

		static ::System::Void ImmediateColor(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_IMMEDIATECOLOR_OFFSET))(r, g, b, a);
		}

		static ::System::Void Color(::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_COLOR_OFFSET))(c);
		}

		static ::System::Void set_invertCulling(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SET_INVERTCULLING_OFFSET))(value);
		}

		static ::System::Void SetViewMatrix(::UnityEngine::Matrix4x4 m)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SETVIEWMATRIX_OFFSET))(m);
		}

		static ::System::Void set_modelview(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SET_MODELVIEW_OFFSET))(value);
		}

		static ::System::Void PushMatrix()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GL_PUSHMATRIX_OFFSET))();
		}

		static ::System::Void PopMatrix()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GL_POPMATRIX_OFFSET))();
		}

		static ::System::Void LoadIdentity()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GL_LOADIDENTITY_OFFSET))();
		}

		static ::System::Void LoadProjectionMatrix(::UnityEngine::Matrix4x4 mat)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_LOADPROJECTIONMATRIX_OFFSET))(mat);
		}

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

		static ::System::Void Begin(::System::Int32 mode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_BEGIN_OFFSET))(mode);
		}

		static ::System::Void End()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GL_END_OFFSET))();
		}

		static ::System::Void GLClear(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_GLCLEAR_OFFSET))(clearDepth, clearColor, backgroundColor, depth);
		}

		static ::System::Void Clear(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_CLEAR_OFFSET))(clearDepth, clearColor, backgroundColor);
		}

		static ::System::Void SetViewMatrix_Injected(::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_SETVIEWMATRIX_INJECTED_OFFSET))(m);
		}

		static ::System::Void LoadProjectionMatrix_Injected(::UnityEngine::Matrix4x4& mat)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GL_LOADPROJECTIONMATRIX_INJECTED_OFFSET))(mat);
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
