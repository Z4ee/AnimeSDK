#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GETPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1CE36660)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GET_OFFSET UNITYSDK_OFFSET(0x1CE36930)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_SWAPMATRIXMAP_OFFSET UNITYSDK_OFFSET(0x1CE3FFD0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE400C0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int VPMatrices_TypeDefinitionIndex = 44744;

	class VPMatrices : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>** StaticGet_s_previousVPMatrix()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(VPMatrices_TypeDefinitionIndex)->GetStaticField(0x1E3F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>** StaticGet_s_currentVPMatrix()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(VPMatrices_TypeDefinitionIndex)->GetStaticField(0x1E3F8);
		}
		static ::System::Int32* StaticGet_s_frameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VPMatrices_TypeDefinitionIndex)->GetStaticField(0xA1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 Get(::UnityEngine::Camera* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GET_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 GetPrevious(::UnityEngine::Camera* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GETPREVIOUS_OFFSET))(a1);
		}

		static ::System::Void SwapMatrixMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_SWAPMATRIXMAP_OFFSET))();
		}
	};
}
