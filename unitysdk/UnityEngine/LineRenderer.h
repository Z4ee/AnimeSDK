#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A44D850)
#define UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1A44D7E0)
#define UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1A44D7B0)
#define UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1A44D8C0)
#define UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A44D8D0)
#define UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A44D880)
#define UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A44D870)
#define UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1A44D8A0)
#define UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1A44D8B0)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A44D840)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1A44D830)
#define UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A44D7A0)
#define UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1A44D800)
#define UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1A44D7D0)
#define UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A44D860)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A44D820)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A44D810)
#define UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1A44D790)
#define UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1A44D7F0)
#define UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1A44D890)
#define UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1A44D7C0)

namespace UnityEngine
{
	inline static constexpr unsigned int LineRenderer_TypeDefinitionIndex = 3945;

	class LineRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void set_startWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET))(this, value);
		}

		::System::Void set_endWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET))(this, value);
		}

		::System::Single get_widthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_widthMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET))(this, value);
		}

		::System::Void set_numCapVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET))(this, value);
		}

		::System::Boolean get_useWorldSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET))(this);
		}

		::System::Void set_useWorldSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET))(this, value);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET))(this, value);
		}

		::System::Void set_startColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::System::Void set_endColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET))(this, value);
		}

		::System::Int32 get_positionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET))(this);
		}

		::System::Void set_positionCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET))(this, value);
		}

		::System::Void SetPosition(::System::Int32 index, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET))(this, index, position);
		}

		::System::Void set_widthCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET))(this, value);
		}

		::System::Void set_colorGradient(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET))(this, value);
		}

		::System::Void SetWidthCurve(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET))(this, curve);
		}

		::System::Void SetColorGradient(::UnityEngine::Gradient* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET))(this, curve);
		}

		::System::Void SetPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void set_startColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_endColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET))(this, index, position);
		}
	};
}
