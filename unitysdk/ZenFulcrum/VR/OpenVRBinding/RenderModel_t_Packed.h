#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_T_PACKED_UNPACK_OFFSET UNITYSDK_OFFSET(0x3AFF3E0)
#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_T_PACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x3AFF3C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_t_Packed_TypeDefinitionIndex = 37167;

	struct alignas(4) RenderModel_t_Packed
	{
		::System::IntPtr rVertexData; // 0x10
		::System::UInt32 unVertexCount; // 0x18
		::System::IntPtr rIndexData; // 0x1C
		::System::UInt32 unTriangleCount; // 0x24
		::System::Int32 diffuseTextureId; // 0x28

		/*
		::System::Void _ctor(::ZenFulcrum::VR::OpenVRBinding::RenderModel_t a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_T_PACKED__CTOR_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void Unpack(::ZenFulcrum::VR::OpenVRBinding::RenderModel_t& a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_T_PACKED_UNPACK_OFFSET))(this, a1);
		}
		*/
	};
}
