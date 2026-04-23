#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_QUADS_OFFSET UNITYSDK_OFFSET(0x1A28FDA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHINGANGLE_OFFSET UNITYSDK_OFFSET(0x1A28FDE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x1A28FDC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_QUADS_OFFSET UNITYSDK_OFFSET(0x1A28FDB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHINGANGLE_OFFSET UNITYSDK_OFFSET(0x1A28FDF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHING_OFFSET UNITYSDK_OFFSET(0x1A28FDD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A28FE00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A28FEC0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshImportSettings_TypeDefinitionIndex = 40059;

	class MeshImportSettings : public ::System::Object
	{
	public:
		::System::Boolean m_Quads; // 0x10
		::System::Boolean m_Smoothing; // 0x11
		::System::Single m_SmoothingThreshold; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_quads()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_QUADS_OFFSET))(this);
		}

		::System::Void set_quads(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_QUADS_OFFSET))(this, value);
		}

		::System::Boolean get_smoothing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHING_OFFSET))(this);
		}

		::System::Void set_smoothing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHING_OFFSET))(this, value);
		}

		::System::Single get_smoothingAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_GET_SMOOTHINGANGLE_OFFSET))(this);
		}

		::System::Void set_smoothingAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_SET_SMOOTHINGANGLE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTSETTINGS_TOSTRING_OFFSET))(this);
		}
	};
}
