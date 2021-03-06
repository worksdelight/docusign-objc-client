#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSEnvelopeDocument.h"


@protocol DSTemplateDocumentsResult
@end

@interface DSTemplateDocumentsResult : DSObject

/* The unique identifier of the template. If this is not provided, DocuSign will generate a value. [optional]
 */
@property(nonatomic) NSString* templateId;
/*  [optional]
 */
@property(nonatomic) NSArray<DSEnvelopeDocument>* templateDocuments;

@end
