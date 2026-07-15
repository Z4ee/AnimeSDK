#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_UNPACK_OFFSET UNITYSDK_OFFSET(0x3AFF3B0)
#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x3AFF3A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_TextureMap_t_Packed_TypeDefinitionIndex = 37165;

	struct alignas(4) RenderModel_TextureMap_t_Packed
	{
		::System::Char unWidth; // 0x10
		::System::Char unHeight; // 0x12
		::System::IntPtr rubTextureMapData; // 0x14

		/*
		::System::Void _ctor(::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED__CTOR_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void Unpack(::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t& a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_UNPACK_OFFSET))(this, a1);
		}
		*/
	};
}
