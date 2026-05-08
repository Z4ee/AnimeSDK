#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/DirectionalLight.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/DiscLight.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LinearColor.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/PointLight.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/RectangleLight.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/SpotLight.h"

namespace UnityEngine { class Light; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINDIRECT_OFFSET UNITYSDK_OFFSET(0x1AAD4730)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINNERCONE_OFFSET UNITYSDK_OFFSET(0x1AAD48B0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_1_OFFSET UNITYSDK_OFFSET(0x1AAD4CD0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_2_OFFSET UNITYSDK_OFFSET(0x1AAD4FD0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_3_OFFSET UNITYSDK_OFFSET(0x1AAD5360)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_4_OFFSET UNITYSDK_OFFSET(0x1AAD56A0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0x1AAD4900)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightmapperUtils_TypeDefinitionIndex = 6292;

	class LightmapperUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(::UnityEngine::Light* l)
		{
			return ((::UnityEngine::Experimental::GlobalIllumination::LinearColor(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINDIRECT_OFFSET))(l);
		}

		static ::System::Single ExtractInnerCone(::UnityEngine::Light* l)
		{
			return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINNERCONE_OFFSET))(l);
		}

		static ::System::Void Extract(::UnityEngine::Light* l, ::UnityEngine::Experimental::GlobalIllumination::DirectionalLight& dir)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(l, dir);
		}

		static ::System::Void Extract_1(::UnityEngine::Light* l, ::UnityEngine::Experimental::GlobalIllumination::PointLight& point)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::PointLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_1_OFFSET))(l, point);
		}

		static ::System::Void Extract_2(::UnityEngine::Light* l, ::UnityEngine::Experimental::GlobalIllumination::SpotLight& spot)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::SpotLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_2_OFFSET))(l, spot);
		}

		static ::System::Void Extract_3(::UnityEngine::Light* l, ::UnityEngine::Experimental::GlobalIllumination::RectangleLight& rect)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::RectangleLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_3_OFFSET))(l, rect);
		}

		static ::System::Void Extract_4(::UnityEngine::Light* l, ::UnityEngine::Experimental::GlobalIllumination::DiscLight& disc)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::DiscLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_4_OFFSET))(l, disc);
		}
	};
}
