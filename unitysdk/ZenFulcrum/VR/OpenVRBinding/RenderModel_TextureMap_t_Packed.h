#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_UNPACK_OFFSET UNITYSDK_OFFSET(0x2131A20)
#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x2131A10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int RenderModel_TextureMap_t_Packed_TypeDefinitionIndex = 30363;

	struct alignas(4) RenderModel_TextureMap_t_Packed
	{
		::System::Char unWidth; // 0x10
		::System::Char unHeight; // 0x12
		::System::IntPtr rubTextureMapData; // 0x14

		/*
		::System::Void _ctor(::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t unpacked)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED__CTOR_OFFSET))(this, unpacked);
		}
		*/

		/*
		::System::Void Unpack(::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t& unpacked)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_UNPACK_OFFSET))(this, unpacked);
		}
		*/
	};
}
