#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCUSTOMDATA_GET_FACESETNAMES_OFFSET UNITYSDK_OFFSET(0x1B187F60)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCUSTOMDATA_SETFACESETNAMES_OFFSET UNITYSDK_OFFSET(0x1B187F70)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B188070)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCustomData_TypeDefinitionIndex = 42560;

	class AlembicCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* faceSetNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_FaceSetNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCUSTOMDATA_GET_FACESETNAMES_OFFSET))(this);
		}

		::System::Void SetFacesetNames(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCUSTOMDATA_SETFACESETNAMES_OFFSET))(this, a1);
		}
	};
}
