#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_PROJECTOR_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1EABA0C0)
#define UNITYENGINE_PROJECTOR_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1EABA080)
#define UNITYENGINE_PROJECTOR_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1EABA0A0)
#define UNITYENGINE_PROJECTOR_GET_IGNORELAYERS_OFFSET UNITYSDK_OFFSET(0x1EABA120)
#define UNITYENGINE_PROJECTOR_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1EABA140)
#define UNITYENGINE_PROJECTOR_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1EABA060)
#define UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x1EABA100)
#define UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EABA0E0)
#define UNITYENGINE_PROJECTOR_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1EABA0D0)
#define UNITYENGINE_PROJECTOR_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1EABA090)
#define UNITYENGINE_PROJECTOR_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1EABA0B0)
#define UNITYENGINE_PROJECTOR_SET_IGNORELAYERS_OFFSET UNITYSDK_OFFSET(0x1EABA130)
#define UNITYENGINE_PROJECTOR_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1EABA150)
#define UNITYENGINE_PROJECTOR_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1EABA070)
#define UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x1EABA110)
#define UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1EABA0F0)
#define UNITYENGINE_PROJECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EABA160)

namespace UnityEngine
{
	inline static constexpr unsigned int Projector_TypeDefinitionIndex = 4141;

	class Projector : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_NEARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_FARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_fieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void set_fieldOfView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_FIELDOFVIEW_OFFSET))(this, a1);
		}

		::System::Single get_aspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_ASPECTRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_orthographic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHIC_OFFSET))(this);
		}

		::System::Void set_orthographic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHIC_OFFSET))(this, a1);
		}

		::System::Single get_orthographicSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHICSIZE_OFFSET))(this);
		}

		::System::Void set_orthographicSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHICSIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_ignoreLayers()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_IGNORELAYERS_OFFSET))(this);
		}

		::System::Void set_ignoreLayers(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_IGNORELAYERS_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_MATERIAL_OFFSET))(this, a1);
		}
	};
}
